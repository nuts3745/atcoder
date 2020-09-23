#!/bin/bash
read -p "コンテスト名を入力(ex:abc001): " dir_name
working_dir=$dir_name

if [ -d ${dir_name} ]; then
    echo "既にディレクトリが存在します"
else
    mkdir $dir_name

    cp -rf c_templates/* $dir_name/

    cd $dir_name/

    cd ./a/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_a
    cd ../b/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_b
    cd ../c/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_c
    cd ../d/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_d
    cd ../e/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_e
    cd ../f/
    oj d https://atcoder.jp/contests/${working_dir}/tasks/${working_dir}\_f
fi
#!/bin/bash
read -p "コンテスト名を入力(ex:abc001): " dir_name
working_dir=$dir_name

if !(type oj > /dev/null 2>&1) ; then
    printf "\e[31;40;1m"
    echo "Failed: online-judge-toolsが見つかりませんでした"
    printf "\e[32;40;1m"
    echo "\"pip3 install online-judge-tools\" を実行してください"
    printf "\e[m"
elif [ -d ${dir_name} ]; then
    printf "\e[33;40;1m"
    echo "Failed: 既にディレクトリが存在します"
    printf "\e[m"
else
    mkdir $dir_name

    cp -rf c_templates/* $dir_name/
    cp -rf templates/* $dir_name/

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
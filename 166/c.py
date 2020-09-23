#!usr/bin/env python3
from collections import defaultdict, deque
from heapq import heappush, heappop
from itertools import permutations
import sys
import math
import bisect

def LI(): return [int(x) for x in sys.stdin.readline().split()]


def I(): return int(sys.stdin.readline())


def LS(): return [list(x) for x in sys.stdin.readline().split()]


def S():
    res = list(sys.stdin.readline())
    if res[-1] == "\n":
        return res[:-1]
    return res


def IR(n):
    return [I() for i in range(n)]


def LIR(n):
    return [LI() for i in range(n)]


def SR(n):
    return [S() for i in range(n)]


def LSR(n):
    return [LS() for i in range(n)]


sys.setrecursionlimit(1000000)
mod = 1000000007


def solve():
    n, m = LI()
    h = LI()
    li = LIR(m)
    flag_list = [False] * n
    for i in range(m):
        if h[li[i][0]-1] > h[li[i][1]-1]:
            flag_list[li[i][1]-1] = True
        elif h[li[i][0]-1] < h[li[i][1]-1]:
            flag_list[li[i][0]-1] = True
        else:
            flag_list[li[i][0]-1] = True 
            flag_list[li[i][1]-1] = True
    print(flag_list.count(False))

    return


if __name__ == "__main__":
    solve()

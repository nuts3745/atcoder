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
    n = I()
    a = LI()
    q = I()
    li = LIR(q)
    def my_index_multi(l, x):
        return [i for i, _x in enumerate(l) if _x == x]
    for i in range(q):
        ch = my_index_multi(a, li[i][0])
        if len(ch) == 1:
            a[ch[0]] = li[i][1]
        else:
            for j in range(len(ch)):
                a[ch[j]] = li[i][1]
        print(sum(a))
    return


if __name__ == "__main__":
    solve()

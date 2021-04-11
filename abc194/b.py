#!usr/bin/env python3
import bisect
import math
import sys
from collections import defaultdict, deque
from heapq import heappop, heappush
from itertools import permutations


def LI(): return [int(x) for x in sys.stdin.readline().split()]


def I(): return int(sys.stdin.readline())


def LS(): return [list(x) for x in sys.stdin.readline().split()]


def S():
    res = list(sys.stdin.readline())
    if res[-1] == "\n":
        return res[:-1]
    return res


def IR(n: int):
    return [I() for _ in range(n)]


def LIR(n: int):
    return [LI() for _ in range(n)]


def SR(n: int):
    return [S() for _ in range(n)]


def LSR(n: int):
    return [LS() for _ in range(n)]


sys.setrecursionlimit(1000000)
mod = 1000000007


def solve():
    n = I()
    li = LIR(n)
    li.sort()
    a, b = mod, mod

    for i in range(1, n):
        a = min(li[i][0], a)
        b = min((li[i][1]), b)

    print(min(min(a, b), li[0][0]+li[0][1]))

    return


if __name__ == "__main__":
    solve()

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
    li = []
    a = 2
    while a*a <= n:
        x = a*a
        while x <= n:
            li.append(x)
            x *= a
        a += 1
    print(n - len(set(li)))

    return


if __name__ == "__main__":
    solve()

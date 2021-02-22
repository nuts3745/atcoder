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


def g1(x):
    x1 = [i for i in str(x)]
    x1.sort(reverse=True)
    return int(''.join([i for i in x1]))


def g2(x):
    x2 = [i for i in str(x)]
    x2.sort()
    return int(''.join([i for i in x2]))


def f(x):
    return g1(x) - g2(x)


def solve():
    n, k = LI()
    ans = n
    for i in range(k):
        ans = f(ans)
    print(ans)
    return


if __name__ == "__main__":
    solve()

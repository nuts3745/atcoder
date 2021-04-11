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
    a = IR(n)
    s = sorted(a[:], reverse=True)
    for i in range(n):
        ans = s[0]
        if s[0] == a[i]:
            ans = s[1]
        print(ans)
    return


if __name__ == "__main__":
    solve()

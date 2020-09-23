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
    ans = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            ans += 0
        elif i % 3 == 0:
            ans += 0
        elif i % 5 == 0:
            ans += 0
        else:
            ans += i
    print(ans)
    return


if __name__ == "__main__":
    solve()

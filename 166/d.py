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
    x = I()
    li = [i ** 5 for i in range(120)]
    m = bisect.bisect(li, x)
    if x == 1:
        a = '0'
        b = '-1'
    elif li[m] - x > x - li[m-1]:
        a = m - 1
        b = int((x - li[a]) ** (1/5)) * -1
    else:
        a = m
        b = int((li[a] - x) ** (1/5))
    print(a,b)
    return


if __name__ == "__main__":
    solve()

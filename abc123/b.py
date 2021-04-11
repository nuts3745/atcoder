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
    li = IR(5)
    li2 = []
    for i in range(5):
        x = 10-li[i]%10
        if x == 10:
            li2.append(0)
        else:
            li2.append(x)
    li2[li2.index(max(li2))] = 0
    print(sum(li+li2))
    return


if __name__ == "__main__":
    solve()

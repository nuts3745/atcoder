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


def Base_n_to_10(X,n):
    X = ''.join(X)
    out = 0
    for i in range(1,len(str(X))+1):
        out += int(X[-i])*(n**(i-1))
    return out


def solve():
    x = S()
    intx = int(''.join(x))
    m = I()
    d = int(max(x))
    dx = d
    ten = 10
    ans = 0
    while ans <= m:
        if intx > m:
            dx += 1
            ans = Base_n_to_10(x, dx)
        else:
            ten += 1
            ans = Base_n_to_10(x, ten)
            dx = ten
    print(dx-d-1)
    return


if __name__ == "__main__":
    solve()

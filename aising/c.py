#!usr/bin/env python3
from collections import defaultdict, deque
from heapq import heappush, heappop
from itertools import permutations, product
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
    
    # ↓TLEになったやつ
    n = I()
    li = [0 for _ in range(10050)]
    for x in range(1, 105):
        for y in range(1, 105):
            for z in range(1, 105):
                func = x**2 + y**2 + z**2 + x*y + y*z + z*x
                if func < 10050:
                    li[func] += 1

    for i in range(1,n+1):
        print(li[i])
    """
    # ↓解説のやつ
    n = int(input())
    ans = [0 for _ in range(10050)]
    for x in range(1, 105):
        for y in range(1, 105):
            for z in range(1, 105):
                f = x**2 + y**2 + z**2 + x*y + y*z + z*x
                if f < 10050:
                    ans[f] += 1
    for i in range(n):
        print(ans[i+1])
    """
    return


if __name__ == "__main__":
    solve()

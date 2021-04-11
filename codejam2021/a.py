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


def Reversort(L):
    count = 0
    for i in range(len(L)-1):
        j = L.index(min(L[i:len(L)]))
        x = L[i:j+1][::-1]
        L[i:j+1] = x
        count += (j-i+1)
    return count


def solve():
    T = I()
    N = []
    L = []
    for i in range(T):
        n = I()
        N.append(n)
        l = LI()
        L.append(l)
    for i in range(1,T+1):
        print("Case #"+str(i)+": "+str(Reversort(L[i-1])))
    return


if __name__ == "__main__":
    solve()

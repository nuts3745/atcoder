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


# x=CJ y=JC
def solve():
    N = I()
    L = SR(N)
    cost = [0,]*N
    for i in range(N):
        x = int(L[i][0])
        y = int(L[i][2])
        s = L[i][4:]
        CJ = ['C','J']
        JC = ['J','C']
        print(x, y, s)
        for j in range(len(s)):
            if s[j] == '?':
                # ここで?をCとJに入れ替えた全通りを用意したほうがよさそう
                s[j] = 'C'
                if s[j:j+2] == CJ:
                    cost[i] += x
                if s[j:j+2] == JC:
                    cost[i] += y
                s[j] = 'J'
                if s[j:j+2] == CJ:
                    cost[i] += x
                if s[j:j+2] == JC:
                    cost[i] += y


    for i in range(1, N+1):
        print("Case #"+str(i)+": "+str(cost[i-1]))
    return


if __name__ == "__main__":
    solve()

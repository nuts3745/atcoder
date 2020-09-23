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
    n, m, q = LI()
    s = LIR(q)
    answers = [0]*m
    points = [[0]*m for _ in range(n)]
    for i in range(q):
        if s[i][0] == 2:
            answers[s[i][2]-1] += 1
            points[s[i][1]-1][s[i][2]-1] = n - answers[s[i][2]-1]
            if answers[s[i][2]-1] > 1:
                for j in range(n):
                    if points[j][s[i][2]-1] > 0 and points[j] != points[s[i][1]-1]:
                        points[j][s[i][2]-1] -= 1
                    else:
                        pass
        else:
            print(sum(points[s[i][1]-1]))

    return


if __name__ == "__main__":
    solve()

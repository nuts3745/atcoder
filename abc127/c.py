#!usr/bin/env python3
import sys


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
    n, m = LI()
    li = LIR(m)
    ans = {i for i in range(1, n+1)}
    for i in range(m):
        ans &= {j for j in range(li[i][0], li[i][1]+1)}
    print(len(ans))
    return


if __name__ == "__main__":
    solve()

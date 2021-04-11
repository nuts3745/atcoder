#!usr/bin/env python3
import bisect
import itertools
import math
import re
import sys
from collections import defaultdict, deque
from heapq import heappop, heappush


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


def alph_solve(alph):
    words = re.findall('[a-z]+', alph)
    ch = set(''.join(words))
    f = {word[0] for word in words}
    n = len(f)
    ss = ''.join(f) + \
        ''.join(ch - f)
    c = tuple(ord(c) for c in ss)
    di = tuple(ord(c) for c in '0123456789')
    zero = di[0]
    for guess in itertools.permutations(di, len(c)):
        if zero not in guess[:n]:
            eq = alph.translate(dict(zip(c, guess)))
            if eval(eq):
                return eq


def solve():
    s1 = str(input())
    s2 = str(input())
    s3 = str(input())
    s = s1 + ' + ' + s2 + ' == ' + s3
    ans = alph_solve(s)
    if ans:
        ans = ans.split()
        print(ans[0], ans[2], ans[4])
    else:
        print('UNSOLVABLE')
    return


if __name__ == "__main__":
    solve()

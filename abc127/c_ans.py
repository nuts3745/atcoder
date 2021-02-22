n, m = map(int, input().split())
a = 0
b = n
for i in range(m):
    l, m = map(int, input().split())
    a = max(a, l)
    b = min(b, m)

print(max(0, b-a+1))

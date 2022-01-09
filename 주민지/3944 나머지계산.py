import sys

T = int(input())

for _ in range(T):
    B, D = input().split()
    B = int(B)
    mod = 0
    for n in D:
        mod += int(n, B) % (B-1)
    print(mod % (B-1))

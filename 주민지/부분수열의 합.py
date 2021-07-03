def f(x, d):
    global res
    if(x >= n):
        if(s == d):
            res += 1
            return
    else:
        f(x+1, d+arr[x])
        f(x+1, d)

n, s = map(int, input().split())
arr = list(map(int, input().split()))
res = 0
f(0,0)

if(s):
    print(res)
else:
    print(res - 1)

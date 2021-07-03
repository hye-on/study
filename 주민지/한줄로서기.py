n = int(input())
c = list(map(int, input().split())) # 2100
result=[0 for i in range(n)] # 0000
for i in range(n):
    a = c[i] 
    cnt = 0
    for j in range(n):
        if cnt == a and result[j] == 0:
            result[j] = i+1
            break
        elif result[j] == 0:
            cnt += 1

for p in result:
    print(p, end=' ')

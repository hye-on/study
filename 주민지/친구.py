N = int(input())

friend = [list(input()) for _ in range(N)] #N만큼의 배열을 만들고 입력받은 것을 list화 시켜 배열에 저장
visit = [[0 for _ in range(N)] for _ in range(N)]  #위의 배열 리스트 들을 모두 0으로 초기화

for j in range(N):
    for k in range(N):
        if j == k: continue

        if friend[j][k] == 'Y'
                visit[j][k] = 1
result = 0

for j in visit:
    result = max(result,sum(j))
print(result)

#백준 틀렸다고 함

n = int(input())

a = list(map(int, input().split()))
dp = [0 for i in range(n)] #수열의 증가 횟수를 저장하는 배열

for i in range(n):
    for j in range(i):
        if a[i] > a[j] and dp[i] < dp [j]: 
            #어떤 식으로든 수열이 증가하고 있다는 의미
            dp=[i] = dp[j] #이전까지 증가한 횟수를 넣어주고
        dp[i] += 1 #수열의 증가 횟수를 1 올려줍니다.
print(max(dp))

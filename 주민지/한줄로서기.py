#자기보다 키 큰 사람은 모두 지나친다. 
# 그리고 자리가 비어있다면 그 자리에 선다. 
# 키 큰 사람을 모두 지나쳤으나 자리가 이미 차있다면 
# 자기보다 키가 작은 사람이 서 있는 것이므로 역시 지나친다. 
# 빈 자리를 발견할 때 까지 뒤로 가서 줄에 선다. greedy

n = int(input()) #4

while n > 10:
    print("N은 10보다 작거나 같은 자연수 입니다.")
    n = int(input()) 

c = list(map(int, input().split())) # 왼쪽에 나보다 키큰 사람 몇명이 있었는지 입력받는다.
result=[0 for i in range(n)] # 0000 초기화

for i in range(n):
    a = c[i] #a에 c의 값을 하나씩 저장
    cnt = 0 #키큰 사람을 얼마나 지나쳤는지의 여부
    for j in range(n):
        if cnt == a and result[j] == 0: #result는 키작은 사람이 이미 자리를 차지 하고 있는지 여부
            result[j] = i+1
            break
        elif result[j] == 0: #내가 본 만큼의 키큰 사람이 안나왔는지 자리만 비어 있으면
            cnt += 1 #내가 본 키큰 사람 수가 나올 때까지 자리를 옮겨간다.

for p in result:
    print(p, end=' ')

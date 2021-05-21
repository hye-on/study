n = int(input()) #진짜 약수의 개수
  
while n > 50: #50 초과의 수가 들어왔을 때의 예외처리
    print("n은 50보다 작거나 같아야 합니다.")
    n = int(input())

n_list = list(map(int, input().split())) #n의 개수만큼 약수 입력

while len(n_list) != len(set(n_list)): #중복되는 숫자가 있을 경우 예외처리
    print("중복되는 숫자가 있습니다.")
    n_list = list(map(int, input().split()))

    if 1 in n_list: #1이 들어왔을 때의 예외처리
        print("진짜 약수는 1과 자기 자신을 포함하지 않습니다.")
    n_list = list(map(int, input().split()))

measure = 0;
measure = min(n_list) * max(n_list)
print(measure)

#못 한 예외처리 1,000,000보다 큰 수가 n_list에 들어왔을 경우

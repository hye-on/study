N = int(input())

while N < 0 or N > 99:
    print("N의 값은 0이상 99이하의 정수여야 합니다.")
    N = int(input())
    
rep = 0
new_num = N #new_num에 초기값 N저장해 두기

while True:
    N_ten = N // 10
    N_one = N % 10
    rep = rep + 1 #연산을 할때마다 반복횟수 1추가
    res_one = (N_ten + N_one) % 10 #연산 결과의 첫번째 자리수 꺼내기
    N = (N_one * 10) + res_one 
    if new_num == N:
        break
print(rep)

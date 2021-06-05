A, B = map(int, input().split()) #a, b 입력받기

while A < 0 or A > B or B < 0 or A > 1000 or B > 1000: #예외처리
    print("A와 B의 숫자 범위는 1 <= A <= B <= 1000 이어야 합니다.")
    A, B = map(int, input().split())

a = [0] #배열에 0을 넣어 초기화

#122333444..를 만들어주는 for문
for i in range(1001):
    for j in range(i): #0~1000까지 반복하며 
        a.append(i) #배열에 i의 수만큼 i에 해당하는 숫자를 추가함
        #append는 리스트의 끝에 ()안의 항목을 더하는 함수였다.

#구간 만큼의 수를 더해주는 for문
sum = 0
for i in range(A, B+1):
    sum += a[i] #a에 3이 들어오면 a[3]부터의 숫자를 더해 준다.
print(sum)

N = input()

while int(N) > 1000000:
    print("N은 1,000,000보다 작거나 같은 자연수 입니다.")
    N = input()

number = [0]*10 #숫자 리스트들 초기화 여기서 필요한 숫자 수를 증가시킬 것이다.

for i in str(N):
    if i == '6' or i == '9':
        if number[6] == number[9]: #6과 9의 인덱스 값이 같다면
            number[6] += 1 #6쪽을 증가시키고
        else:
            number[9] += 1 #아니면 9쪽을 증가시켜라
    else:
        number[int(i)] += 1
print(max(number))

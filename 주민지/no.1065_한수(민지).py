n = int(input()) #n이 주어졌을 때 등차수열을 만족하는 범위의 끝

while n > 1000 or n < 0: #n이 1000이상일 때 예외처리
    print("n은 1000이하여야 합니다.")
    n = int(input())

han = 0 #한수의 개수 초기화

for i in range(1, n + 1):
    if i < 100: #i의 개수가 100개 미만이면
        han += 1 #한수 갯수 증가
    else:
        #i의 각자리 숫자를 빼주기 위해 i를 문자열 배열로 만든 후 그 문자열을 다시 int형으로 재배열해 list로 만듦
        num = list(map(int,str(i)))
        if num[0] - num[1] == num[1] - num[2]: #index 0 - 1 한 값과 1 - 2 한 값이 같으면 등차수열 이므로 han에 더한다.
            han+=1
print(han)

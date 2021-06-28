X, Y = input().split()

while int(X) > 1000 or int(Y) > 1000:
    print("X와 Y는 1000보다 작거나 같은 자연수 입니다.")
    X, Y = input().split()

X = X[::-1] #문자열을 하나씩, 반대로 잘라 다시 입력시킨 후 출력한다.
Y = Y[::-1]

#뒤집힌 숫자에 0이 있을 경우
zero = "0"
for i in range(len(zero)):
    X = X.replace(zero[i],"") 

for j in range(len(zero)):
    Y = Y.replace(zero[j],"") #0은 모두 빈칸으로 대체한다.

rev_sum = int(X) + int(Y) #322
temp = "" #빈 문자열 생성
for k in range(len(str(rev_sum))):
    if k==0:
        temp += str(rev_sum%10) #입력받은 수의 1의 자리 분리
    elif k>0 and i<len(str(rev_sum))-1:
        temp += str(rev_sum//(10**k)%10) #십의자리와 백의 자리 분리 후 temp에 넣음 **은 제곱이라는 의미
print(temp)

#백준은 틀렸다고함 왜일까?

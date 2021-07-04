def f(x, d):
    global res #함수 밖에서도 사용 가능한 전역 변수
    if(x >= N):
        if(S == d):
            res += 1
            return
    else:
        f(x+1, d+arr[x]) #x값 증가시켜가면서 함수 반복
        #f 함수가 원소를 포함하는 경우
        f(x+1, d)
        #f 함수가 원소를 포함하지 않는 경우

N, S = map(int, input().split())
while N > 20 or N < 1 or abs(S) > 100000:
    print("N은 1<= N <= 20 이며, S의 절댓값은 10,000을 넘지 않는다.")
arr = list(map(int, input().split()))

res = 0
f(0,0)

if(S):
    print(res)
else:
    print(res - 1) #답이 없으면 -1 출력

#출력 초과

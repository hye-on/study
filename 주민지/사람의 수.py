#못품
import sys
input = sys.stdin.readline #input()과 다르게 개행문자를 삭제하지 않아 계산이 빨라진다.

N = int(input().rstrip())
S = []

for _ in range(N):
    S.append(input().rstrip()[2:]) #rstrip() 오른쪽의 ()안의 있는 특정문자 삭제
    # 0.500으로 표현된 정수를 "500"으로 바꾸어야 하기 때문에 [2:]를 사용하였다.
d = {} #빈 딕셔너리 생성, 배열과 다르다. Key 와 Value으로 구분되며, Key를 사용하여 값에 접근 가능하다.
for i in range(1, 954): #1~953
    for j in range(i):
        t = f'{j/i:.4f}'[2:5] #2~4 인덱스의 값만 뽑아낸다
        #f - 포멧문자 리터럴 변수 또는 리터럴 값을 참조하여 바로 연산을 할 수 있다.
        if t not in d:
            d[t] = i #딕셔너리 쌍을 추가하는 것이다 d[t]는 key가 i는 vaule가 된다.

ans = []
for v in S:
    ans.append(d[v]) #S의 값을 키값으로 가진 value를 ans를 구하고

import math
print(math.lcm(*ans)) #lcm은 최고공배수를 구하는 라이브러리
#ans의 최소공배수를 구하라

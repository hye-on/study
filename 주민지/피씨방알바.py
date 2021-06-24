N = int(input())

while N > 100:
    print("N은 100보다 작거나 같습니다.")
    N = int(input())

want_sit = list(map(int, input().split()))
PC_sit = [0] * 101 # pc방 자리
refuse = 0 #거절당함

for i in want_sit:
    if PC_sit[i] != 0:
        refuse += 1
    else:
        PC_sit[i] += 1

print(refuse)

L,R = input().split()

while int(L) > 2000000000 or int(L) > int (R) or int(R) > 2000000000:
    print("R은 L보다 커야하며, L과 R은 2000,000,000보다 작거나 같은 수 입니다.")
    L,R = input().split()

Ll,Rl = len(L), len(R) 
#자릿수를 세는 이유는 자릿수가 다르면 8이 무조건 들어갈
#필요가 없는 경우가 나오기 때문에 그럴 경우를 판단하기 위해서 이다.

cnt = 0
if Ll != Rl : #자릿수가 다르면
  print(cnt) #0을 출력하라
else :
  for i in range(Ll) : #Ll의 자릿수 만큼 for문을 돌려서
    if L[i] != R[i] : #L과 R의 인덱스 숫자가 다른 경우도 제외한다.
      break
    else :
      if L[i] == '8' : #L과 R의 인덱스 숫자가 같고 L의 인덱스가 8이라면 cnt를 증가시킨다.
        cnt += 1
 print(cnt)

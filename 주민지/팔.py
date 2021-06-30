L,R = input().split()
Ll,Rl = len(L), len(R)
cont = 0
if Ll != Rl :
  print(cnt)
else :
  for i in range(Ll) :
    if L[i] != R[i] :
      break
    else :
      if L[i] == '8' :
        cnt += 1
  print(cnt)

import sys

c,p=map(int,input().split())
fd=list(map(int,sys.stdin.readline().split()))

ans=0
if p==1:
    #ㅣ모양의 블럭은 모든열에 놓을 수 있기 때문에 c만큼 경우의 수를 더함
    ans=ans+c  #0
    for i in range(c-3):
        #0000
        if fd[i] == fd[i + 1] and fd[i + 1] == fd[i + 2] and fd[i + 2] == fd[i + 3]:
            ans+=1
if p==2:
    for i in range(c-1):
        #00
        if fd[i] == fd[i + 1]:
            ans+=1
if p==3:
    for i in range(c-2):
        #001
        if fd[i] == fd[i + 1] and fd[i + 1] == fd[i + 2] - 1:
            ans+=1
    for i in range(c-1):
        #10
        if fd[i] == fd[i + 1] + 1:
            ans+=1
if p==4:
    for i in range(c-2):
        #100
        if fd[i] == fd[i + 1] + 1 and fd[i + 1] == fd[i + 2]:
            ans+=1
    for i in range(c-1):
        #01
        if fd[i] == fd[i + 1] - 1:
            ans+=1
if p==5:
    for i in range(c-2):
        #000
        if fd[i] == fd[i + 1] and fd[i + 1] == fd[i + 2]:
            ans+=1
        #101
        if fd[i] == fd[i + 1] + 1 and fd[i + 1] == fd[i + 2] - 1:
            ans+=1
    for i in range(c-1):
        #10
        if fd[i] == fd[i + 1] - 1:
            ans+=1
        #10
        if fd[i] == fd[i + 1] + 1:
            ans+=1
if p==6:
    for i in range(c-2):
        #000
        if fd[i]==fd[i+1] and fd[i+1]==fd[i+2]:
            ans+=1
        #011
        if fd[i]==fd[i+1]-1 and fd[i+1]==fd[i+2]:
            ans+=1
    for i in range(c-1):
        #00
        if fd[i]==fd[i+1]:
            ans+=1
        #20
        if fd[i]==fd[i+1]+2:
            ans+=1
if p==7:
    for i in range(c-2):
        #000
        if fd[i]==fd[i+1] and fd[i+1]==fd[i+2]:
            ans+=1
        #110
        if fd[i]==fd[i+1] and fd[i+1]==fd[i+2] + 1:
            ans+=1
    for i in range(c-1):
        #02
        if fd[i]==fd[i+1]-2:
            ans+=1
        #00
        if fd[i]==fd[i+1]:
            ans+=1

print(ans)

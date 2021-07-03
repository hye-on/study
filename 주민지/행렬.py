#greedy 알고리즘
N, M =map(int,input().split())

while N > 50 or M > 50:
    print("N과 M은 50보다 작거나 같은 자연수 입니다.")
    N, M =map(int,input().split())

A = [list(map(int,list(input()))) for _ in range(N)] #3개의 배열을 입력받는다. 알아서 4개 넘지 않게 넣는다.
B = [list(map(int,list(input()))) for _ in range(N)] #3개의 배열을 입력받는다.

def flip(x,y):
    for i in range(x,x+3): #3*3크기의 부분 행렬만 바꿔야 하므로 0~2까지의 인덱스만 바꾼다.
        for j in range(y,y+3):
            A[i][j] = 1 - A[i][j] #(0 -> 1, 1 -> 0)

def checkEquality():
    for i in range(N):
        for j in range(M):
            if A[i][j] !=B[i][j]:
                return 0
    return 1 #AB가 같다면 1을 반환한다.

cnt = 0
for i in range(0,N-2): #3*3크기의 부분 행렬만 바꿔야 하므로 -2만큼 경계준다.
    for j in range(0,M-2):
        if A[i][j] != B[i][j]:
            flip(i,j)
            cnt+=1

if checkEquality(): #1을 반환받으면 cnt 출력
    print(cnt)
else: #아니면 -1을 출력한다.
    print(-1)

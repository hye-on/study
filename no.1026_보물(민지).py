n = int(input()) # list에 입력받을 수의 개수
a_list = list(map(int, input().split())) #input 한번에 여러개의 값 입력 받기
b_list = list(map(int, input().split()))

s = 0
for i in range(n):
    
    a_list.pop(a_list.index(min(a_list))) #a_list의 가장 작은 값을 꺼냄
    b_list.pop(b_list.index(max(b_list))) #b_list의 가장 큰 값을 꺼냄
    s += min(a_list) * max(b_list)

print(s)

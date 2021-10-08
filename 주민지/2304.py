N = int(input())
min_L = 1000
max_L = 1
max_H_idx = -1
max_H_val = -1
input_list = []

# 입력 정보 확인
for _ in range(N):
    L, H = map(int, input().split())
    input_list.append((L, H))
    if L < min_L:
        min_L = L
    if L > max_L:
        max_L = L
    if H > max_H_val:
        max_H_val = H
        max_H_idx = L

# 기둥 높이 리스트
my_list = [0] * (max_L + 1)
for L, H in input_list:
    my_list[L] = H

# 왼쪽부터 top까지 탐색
temp = 0
my_sum = 0
for i in range(max_H_idx + 1):
    if my_list[i] > temp:
        temp = my_list[i]
    my_sum += temp

# 오른쪽부터 top까지 탐색
temp = 0
for j in range(max_L, max_H_idx, -1):
    if my_list[j] > temp:
        temp = my_list[j]
    my_sum += temp

print(my_sum)

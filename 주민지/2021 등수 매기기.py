from sys import stdin

n = int(input())

grade = []
for i in range(n):
    grade.append(int(stdin.readline()))
# 예상등수
grade.sort()
res = 0 
# 1등부터 n등까지
# i = 실제등수
for i in range(1, n+1):
    res += abs(grade[i-1]-i)
print(res)

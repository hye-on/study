a,b = input().split()
a_sum = 0
b_sum = 0
for i in range(len(a)):
    a_sum+=int(a[i])
for j in range(len(b)):
    b_sum+=int(b[j])
print(a_sum*b_sum)

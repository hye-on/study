k=int(input())
size = 1
max_len = 0
answer = 0
while size < k:
    size *= 2
    max_len = size

while k >0:
    if k>=size:
        k-=size
    else:
        size /= 2
        answer+=1

print(max_len, answer)

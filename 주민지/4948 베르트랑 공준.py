import math

def isPrime(num):
    if num == 1: return False

    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0: return False

    return True 
#소수를 구하는 함수


li = list(range(2,246912)) #2에서 246912개의 리스트를 만들어
prime_li = []
for i in li:
    if isPrime(i):
        prime_li.append(i)
#그 리스트 내에 있는 소수들을 모두 구함

while(1):
    answer = 0
    n = int(input())
    if n == 0: break

    for i in prime_li: #그리고 그 prime_li에 있는 소수들과 들어온 n내에 있는 수들을 모두비교해 소수를 구함
        if n < i <= n*2:
            answer += 1

    print(answer)

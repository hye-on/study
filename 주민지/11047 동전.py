n, k = map(int, input().split()) 
#map은 리스트의 요소를 지정된 함수로 처리해주는 함수
# k원을 만드는데 필요한 동전 개수의 최솟값

m = []
# 동전의 가치를 저장하는 배열 (오름차순으로)

num = 0

for i in range(n):
    m.append(int(input())) #동전의 가치가 주어짐

for i in range(n-1, -1, -1): #n-1부터 0까지 -1씩 빼가며 for문을 반복하라
    if k == 0:
        break 
        #만약 k가 0이라면 k원을 만드는데 필요한 동전의 개수가 0이므로 0을 출력한다.
    if m[i] > k: #배열 m의 i번째 인덱스에 담겨 있는 값이 k보다 크다면 for문을 계속 진행한다.
        continue
    num += k // m[i] 
    #m의 i번째 인덱스에있는 값이 k보다 작게 되면,
    #k와 m의 i번째 인덱스 값을 나눈 뒤, num에 더해 저장해준다.
    k %= m[i] #k에는 m의 i번째 인덱스 값을 나눈 나머지를 저장해 준다.
print(num) #

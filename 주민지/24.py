h1, m1, s1 = map(int, input().split(':')) #지금시간
h2, m2, s2 = map(int, input().split(':')) #임무를 시작한 시간

while (h1 == h2 and m1 == m2 and s1 == s2) :
    print("임무를 시작한 시간과 현재 시간이 같은 경우는 주어지지 않습니다.")
    h1, m1, s1 = map(int, input().split(':')) #지금시간
    h2, m2, s2 = map(int, input().split(':')) 

time = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1)

h = time//3600
m = (time%3600) // 60
s = time % 60

print("%02d:%02d:%02d" % (h,m,s))

E, S, M = map(int, input().split())
year = 1

while 1:
    if (E<1 or E>15):
        print("E는 1이상 15 이하 입니다.")
        E, S, M = map(int, input().split())
    if (S<0 or S>28):
        print("S는 1이상 28 이하 입니다.")
        E, S, M = map(int, input().split())
    if (M<0 or M>19):
        print("M는 1이상 19 이하 입니다.")
        E, S, M = map(int, input().split())
    else:
        break


while True:
    if ((year - E) % 15 == 0 and (year - S) % 28 == 0 and (year - M) % 19 == 0):
        print(year)
        break
    year += 1

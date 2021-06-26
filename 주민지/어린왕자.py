T = int(input())

for j in range(T):
    x_1, y_1, x_2, y_2 = map(int, input().split())
    n = int(input()) #행성계 개수
    cnt = 0
    for i in range(n):
        c_x, c_y, r = map(int, input().split())
        start = ((x_1 - c_x) ** 2 + (y_1 - c_y) ** 2) ** 0.5 # 점과 직선 사이의 거리
        end = ((x_2 - c_x) ** 2 + (y_2 - c_y) ** 2) ** 0.5
        if (start < r and end > r) or (start > r and end < r):
            #두 행성 중 하나라도 원 안에 속해 있으면 행성계를 거치므로 1을 증가 시킨다.
            cnt += 1
    print(cnt)

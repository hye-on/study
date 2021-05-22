x, y, w, h = map(int, input().split())

while 1:
    if w < 1:
        print("w의 값은 1이상 이어야 합니다.")
        x, y, w, h = map(int, input("좌표를 입력하세요.\n").split())
    if h > 1000:
        print("h의 값은 1000이상 이어야 합니다.")
        x, y, w, h = map(int, input("좌표를 입력하세요.\n").split())
    if x < 1 or x > w-1:
        print("x의 값은 1이상 w-1이하 여야 합니다.")
        x, y, w, h = map(int, input("좌표를 입력하세요.\n").split())
    if y < 1 or y > h-1:
        print("y의 값은 1이상 h-1이하 여야 합니다.")
        x, y, w, h = map(int, input("좌표를 입력하세요.\n").split())
    else:
        break

X_end = w - x
Y_end = h - y

position_list = [x, y, X_end, Y_end]
print(min(position_list))

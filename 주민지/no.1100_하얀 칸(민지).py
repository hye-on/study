chess_mal = []
for _ in range(8):
    chess_mal.append(list(map(str, input()))) #append는 리스트에 요소로 추가하라는 함수

white_position = 0
for i in range(8):
    for j in range(8):
        if (i % 2 == 0 and j % 2 == 0) or (i % 2 == 1 and j % 2 == 1):
            if chess_mal[i][j] == 'F':
                white_position += 1

print(white_position)

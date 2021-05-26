def _player():
    player_num = int(input())
    while player_num < 1 or player_num > 150:
      print("선수의 수는 1과 150명 사이어야 합니다.")
      player_num = int(input())
  
    if player_num < 5:
        print('PREDAJA')
        return
    
    Check = [0] * 26
    Alphabet = 'abcdefghijklmnopqrstuvwxyz'

    for i in range(player_num):
        name = str(input())
        Check[Alphabet.index(name[0])] += 1

    select_plyaer = []
    for i in range(26):
        if Check[i] >= 5:
            select_plyaer.append(Alphabet[i])

    if not select_plyaer:
        print('PREDAJA')
    else:
        for i in select_plyaer:
            print(i, end='')
           
_player()

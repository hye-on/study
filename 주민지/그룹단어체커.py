N = int(input())

while N > 100 : #예외처리
    print('N은 100보다 작거나 같은 자연수 입니다.')
    N = int(input())

group_word = 0
words_list=[]
for i in range(N): #N개의 줄에 단어가 들어온다.
    words = input()
    words_list.append(words)
    while words.islower() == False: #대문자 들어왔을 경우 예외처리
        print('단어는 소문자로만 입력되야 합니다.')
        words = input()
        words_list.append(words)


    wrong = 0
    for j in range(len(words) - 1): #0에서 부터 세기 때문에 단어 전체길이-1을 해준다.
        if words[j] != words[j+1]: #현재 인덱스의 문자와 다음 인덱스 문자가 같지 않으면
            new_word = words[j+1:] #j+1번째 인덱스 부터 끝까지의 단어를 new_word라는 곳에 저장 시킨다.
            if new_word.count(words[j]) > 0: #new_word에서 이미 나왔던 인덱스 j에 해당하는 값이 하나라도 나오면
                wrong += 1 #그룹 단어가 아니라는 count를 증가시킨다.
    if wrong == 0: #그룹단어가 아니라는 수가 0이라면
        group_word += 1 #해당 단어는 그룹단어이다.
print(group_word) #최종 그룹단어 개수를 출력한다.

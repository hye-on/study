word = input().upper()
word_list = list(set(word)) #set은 문자열 내의 중복값을 혀용하지 않는다.
count_list = []

for i in word_list:
    count = word.count(i) #word에 입력된 indext 하나하나를 세서 그 개수를
    count_list.append(count) #count_list에 넣는다.

if count_list.count(max(count_list)) >= 2:
    print('?')
else :
    max_index = count_list.index(max(count_list))
    print(word_list[max_index])

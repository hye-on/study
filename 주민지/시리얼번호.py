import sys
input = sys.stdin.readline

def sum_num(s):
  res=0
  for i in s:
    if i.isdigit():
      res += int(i)
    retrun res
    
n = int(input())
serial = [input().rstrip() for _ in range(n)]
serial.sort(key=lambda x:(len(x), sum_num(x), x))
for s in serial:
  print(s)

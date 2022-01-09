from sys import stdin
input = stdin.readline

n, m = map(int, input().split())
D = ('U', 'R', 'D', 'L')
P, Q = (1, 0, 3, 2), (3, 2, 1, 0)
dx, dy = (-1, 0, 1, 0), (0, 1, 0, -1)
a = ['C'*(m+2)]
for _ in range(n):
    a.append(list('C'+input().strip()+'C'))
a.append(list('C'*(m+2)))
sx, sy = map(int, input().split())

def solve():
    dist, direct = 0, 0
    for i in range(4):
        x, y, cnt, k = sx, sy, 1, i
        while a[x+dx[k]][y+dy[k]] != 'C':
            x, y = x+dx[k], y+dy[k]
            if a[x][y] == '/':
                k = P[k]
            elif a[x][y] == '\\':
                k = Q[k]
            cnt += 1
            if x == sx and y == sy and k == i:
                print("%c\nVoyager" % D[i])
                return
        if dist < cnt:
            dist = cnt
            direct = i
    print("%c\n%d" % (D[direct], dist))

solve()

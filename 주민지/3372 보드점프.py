n = int(input())
grid=[list(map(int, input().split())) for _ in range(n)]
d = [[0]*n for i in range(0, n)]

d[0][0] = 1
for i in range(0, n):
    for j in range(0, n):
        if grid[i][j] == 0:
            continue
        if (i + grid[i][j] < n): d[i + grid[i][j]][j] += d[i][j]
        if (j + grid[i][j] < n): d[i][j + grid[i][j]] += d[i][j]

print(d[n -1 ][n - 1])

n = int(input())
a, b = map(int, input().split())
m = int(input())


def dfs(vertex):
    global result
    if result > 0:  
        return

    if vertex == b:  
        result = visit.count(True) - 1  
        return

    for neighbor in adj[vertex]:  
        if visit[neighbor] is False:  
            visit[neighbor] = True  
            dfs(neighbor)  
            visit[neighbor] = False  

    return



adj = [[] for _ in range(n+1)]
for _ in range(m):  
    s, e = map(int, input().split())
    adj[s].append(e)
    adj[e].append(s)

result = -1 
visit = [False]*(n+1)
visit[a] = True 
dfs(a)

print(result)

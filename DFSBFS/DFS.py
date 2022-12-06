def dfs(g, v, vs):
    vs[v] = True
    print(v, end=' ')
    for i in g[v]:
        if not vs[i]:
            dfs(g, i, vs)

g = [
  [],
  [2, 5],
  [1, 3, 4],
  [2],
  [2],
  [1]
]

vs = [False] * 6

dfs(g, 1, vs)
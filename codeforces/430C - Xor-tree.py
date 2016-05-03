# http://codeforces.com/problemset/problem/430/C

R = lambda : map(int,raw_input().split())
n, = R()
graph,status,goal,ans = {}, [], [], []
vis = [False]*(n)

def bfs(node):
	stack = [[node,False,False]]
	while stack:
		vertex = stack.pop()
		node = vertex[0]

		if not vis[vertex[0]]:
			vis[vertex[0]] = True
			if vertex[1]:
				status[node] = not status[node]
			change = False
			if(status[node] != goal[node]):
				status[node] = not status[node]
				ans.append( node + 1 )
				change = True
			
			if graph.has_key(node):
				for child in graph[node]:
					stack.extend([[child,vertex[2],vertex[1]^change]])
					
for i in xrange(1,n):
	x , y = R()
	for _ in xrange(2):
		if graph.has_key(y-1):
			graph[y-1].add(x-1)
		else:
			graph[y-1] = set([x-1])
		x, y = y, x

status = R()
goal = R() 
bfs(0)
print len(ans)
for answer in ans: print answer
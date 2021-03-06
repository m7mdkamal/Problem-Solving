# http://codeforces.com/problemset/problem/320/B
R = lambda : map(int,raw_input().split())
n, = R()
graph = []

def dfs(start , end):
	vis , stack = [] , [graph[start]]
	while stack:
		vertex = stack.pop()
		if vertex not in vis:
			vis.append(vertex)
			for i in graph:
				if i[0] < vertex[0] < i[1] or i[0] < vertex[1]  < i[1]:
					stack.extend([i])
			if graph.index(vertex)==end: return True	
				
	return False

for i in xrange(1,n+1):
	o , x , y = R()
	if o == 1:
		graph.append([x,y])
	else:
		print "YES" if dfs(x-1 , y-1) else "NO"
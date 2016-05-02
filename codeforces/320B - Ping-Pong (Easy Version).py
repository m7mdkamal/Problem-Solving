# http://codeforces.com/problemset/problem/320/B

n = int(raw_input())

graph = []

def dfs(start , end):
	vis , stack = [] , [graph[start]]
	while stack:
		# print stack
		vertex = stack.pop()
		if vertex not in vis:
			vis.append(vertex)
			for i in graph:
				if i[0] < vertex[0] and vertex[0] < i[1]:
					stack.extend([i])
				elif i[0] < vertex[1] and vertex[1]  < i[1]:
					stack.extend([i])
			if graph.index(vertex)==end: return True	
				
	return False


for i in xrange(1,n+1):
	o , x , y = map(int,raw_input().split())
	if o == 1:
		graph.append([x,y])
	else:
		if dfs(x-1 , y-1):
			print "YES"
		else:
			print "NO"


# print graph

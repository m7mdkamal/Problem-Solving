t = int(raw_input())
n = list(map(int , raw_input().split()))

sa = sorted(n,reverse=True)

r = sa[0]
c = 2
ans = {sa[0] : 1}

for x in sa[1:]:
	if(x!=r):
		ans[x] = c
		r = x
	c = c+1
	
for x in n:
	print ans[x],
#http://codeforces.com/contest/659/problem/C
n , m = map(int , raw_input().split())
l = dict((int(v), 1) for v in  raw_input().split())

sum , count = 0 , 0
ans = []
while sum < m:
	count += 1
	if not l.get(count,0):
		sum+= count
		if sum > m:
			break
		ans.append(count)

print len(ans)
print ' '.join(map(str, ans))



#http://codeforces.com/contest/231/problem/C

n , k = map(int, raw_input().split())
ar = map(int,raw_input().split())

ar.sort()
s = [0] * (n + 1)
for i in xrange(n):
    s[i + 1] = s[i] + ar[i]

i, j, maxx, ans = 0, 1, 1, ar[0]
for j in xrange(n):
    while ((j - i) * ar[j] - s[j] + s[i]> k): i += 1
    if j - i + 1 > maxx:
    	maxx, ans = j - i + 1, ar[j]
    j += 1

print maxx, ans
    
    
t = int(raw_input())

for i in range(t):
	k = int(raw_input())
	if 360%(180-k)==0:
		print "YES"
	else:
		print "NO"
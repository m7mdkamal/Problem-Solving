n = int(raw_input())
a = [map(int , raw_input().split()) for _ in range(0,n+1)]

acc=[["e","n"],["n","w"],["w","s"],["s","e"]]
pre_x , pre_y = a[0]

ans = []
out = 0
for x , y in a:
	if x == pre_x and y ==pre_y:
		continue
	elif x == pre_x and y > pre_y:
		ans.append("n")
	elif x == pre_x and y < pre_y:
		ans.append("s")
	elif x > pre_x and y == pre_y:
		ans.append("e")
	elif x < pre_x and y == pre_y:
		ans.append("w")
	if len(ans) > 1:
		if ans[len(ans)-2:] in acc:
			out += 1
	
	pre_x , pre_y = x , y

print out
# print ans
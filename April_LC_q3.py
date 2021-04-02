def strstr(Str, target):	
	t = 0
	Len = len(Str)
	i = 0
	for i in range(Len):
		if (t == len(target)):
			break
		if (Str[i] == target[t]):
			t += 1
		else:
			t = 0
	if (t < len(target)):
		return "NO"
	else:
		return "Yes"


try:
	Test = int(input())
	while Test:
		n,sub = [int(x) for x in input().split()]
		main = input()
		s=""
		for i in range(0,sub):
			s+='*'
	
		print(strstr(main,s))
		Test -= 1

except:
	pass
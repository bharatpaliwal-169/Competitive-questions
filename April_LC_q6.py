def isSubSequence(str1, str2):
    m = len(str1)
    n = len(str2)

    j = 0    # Index of str1
    i = 0    # Index of str2

    while j < m and i < n:
        if str1[j] == str2[i]:
            j = j+1
        i = i + 1
    return j == m

def decimalToBinary(n):
	return bin(n).replace("0b", "")

#main		
try:
	Test = int(input())
	while Test:
		input_str = input()
		x = -1
		while True:
			x += 1
			binary_x = decimalToBinary(x)
			# print(binary_x)
			str_x = str(binary_x)
			# print(str_x,input_str)
			if not isSubSequence(str_x,input_str):
				print(str_x)
				break
			
		Test -= 1
except:
	pass
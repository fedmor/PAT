def chinesename(n):
	if n == '0':
		return "ling"
	elif n == '1':
		return "yi"
	elif n == '2':
		return "er"
	elif n == '3':
		return "san"
	elif n == '4':
		return "si"
	elif n == '5':
		return "wu"
	elif n == '6':
		return "liu"
	elif n == '7':
		return "qi"
	elif n == '8':
		return "ba"
	else: 
		return "jiu"

x = input()
sum = 0
while  x != 0 :
	sum = sum + ( x % 10 )
	x = x / 10
sum = str(sum)
for each in sum :
	print chinesename(each),


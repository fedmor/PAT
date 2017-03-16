x = input()
n=0
while x!=1 :
	if x%2==0:
		x=x/2
	else:
		x=(3*x+1)/2
	n=n+1
print n
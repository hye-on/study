def gcd(a,b):
	if b == 0:
		return a 
	aa = a%b
	return gcd(b,aa)
a, b = map(int,input().split())
k = gcd(a,b) 
print('1'*k)

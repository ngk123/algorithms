import math

T=int(raw_input())
for i in range(T):
	s=raw_input()
	s=s.split()
	k=int(s[0])
	n=int(s[1])
	num=pow(k,n+1)
	num=num-1
	num=num/(k-1)
	sum1=0
	while (num>0):
		sum1+=num%10
		num=num/10
	print sum1

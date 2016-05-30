T=input();
while T:
	T-=1;
	x, m ,n = raw_input().split();
	x, m ,n = [int(x), int(m),int(n)];
	if x==1:
		ans=(m+1)%n;
		print ans;
		continue;
	ans=1;
	tmod=n*(x-1);
	temp=m+1;
	base=x;
	while temp:
		if temp%2==1:
			ans=(ans*base)%tmod;
		base=(base*base)%tmod;
		temp>>=1;	
	ans=(ans-1)%tmod;
	if ans<0:
	 	ans+=tmod;
	ans=ans/(x-1);
	print ans;	

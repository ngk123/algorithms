#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli gcd(lli num, lli den);
int main()
{
	int T,N,M,nE,nO,mE,mO;
	lli prod,num,ans;
	
	
	scanf("%d",&T);
	while(T--)
	{
	scanf("%d%d",&N,&M);
	nE=N/2;
	mE=M/2;
	if(N%2==1)nO=nE+1;
	else nO=nE;
	
	if(M%2==1)mO=mE+1;
	else mO=mE;
	
	num=(lli)nE*mO+(lli)nO*mE;
	prod=(lli)N*M;
	if(num!=0)
	{
	ans=gcd(num,prod);
	num=num/ans;
	prod=prod/ans;
	}
	
	printf("%lli/%lli\n",num,prod);

	}
	return 0;
}

lli gcd(lli a, lli b)
{
	lli rem;
	rem=b%a;	
	while(rem!=0)
	{
		b=a;
		a=rem;
		rem=b%a;	
	}
	return a;
}




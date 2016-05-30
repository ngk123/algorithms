#include<cstdlib>
#include<cstdio>

typedef long long int lli;
int main()
{
	int a,b,T,diff;
	lli ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&a,&b);
		if(a<0){a=-a; }
		if(b<0){b=-b;}
		if(a>=b)diff=((a-b)+1)/2;
		else diff=(b-a)/2;
		
		ans=(lli)a+b+(2*diff);
		printf("%lld\n",ans);	
	}
	return 0;
}

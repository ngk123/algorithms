#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
	long long int T,X,Y,xhigh,xlow,yhigh,ylow;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld%lld",&X,&Y);
		if((X==0 && Y==0) || (X==1 && Y==0)) 
		{
			printf("YES\n");
			continue;
		}
		
		if(X==1 && Y%2==0)
		{
			printf("YES\n");
			continue;		
		}
		if((X<0 && (X%2)==0))
		{		
			yhigh=-X;
			//printf("%lld\n",X);
			if(Y<=yhigh && Y>=X)
			{
				printf("YES\n");
				continue;
			}
			
		}		
		if((X>0 && (X%2)==1))
		{
			yhigh=X+1;
			ylow=-(yhigh-2);
			if(Y<=yhigh && Y>=ylow)
			{			
				printf("YES\n");
				continue;
			}
			
		}
		if((Y%2)==0 && Y>0)
		{
			xhigh=Y-1;
			xlow=-Y;
			if(X<=xhigh && X>=xlow)
			{			
				printf("YES\n");
				continue;
			}

		
		}
		if((Y%2)==0 && Y<0)
		{
			xhigh=(-Y)+1;
			xlow=Y;
			if(X<=xhigh && X>=xlow)
			{			
				printf("YES\n");
				continue;
			}
		
		}
		
			printf("NO\n");		
		
	}
	return 0;
}

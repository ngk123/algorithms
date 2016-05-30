#include <cstdio>
#include <cmath>
#define max 1000000

using namespace std;


int main ()
{
    int T,n,i,j,a,b,diff,c,d,even,maximum;	
	long long int pre,current;
	int stgth[1000003]={0};
	scanf("%d",&T);
	
	while(T--)
	{
		//cin>>n>>a>>b>>c>>d;
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
		diff=0;
		
		stgth[d]=1;
		pre=d;
		
		for(i=1;i<n;i++)
		{
			current=(pre*pre);
			//current=current-(current/max)*max; 
			current=((current*a)+(b*pre)+c)%max;
			stgth[current]=stgth[current]+1;	
			pre=current;
		}
		
		even=1;
		for(i=0;i<=max;i++)
		{
			if(stgth[i]&1)
			{
				if(even==1)
				{
						diff+=i;
						even=0;
				}
		
				else
				{
						diff-=i;
						even=1;
				}
			}
		 stgth[i]=0;
		}
		if(diff<0)
			diff=-diff;
		printf("%d\n",diff);
		
	}		
		 
	return 0;
}


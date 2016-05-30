#include<cstdlib>
#include<cstdio>
#include<cstring>

typedef long long int lli;
int main()
{
int T,N,count,i;
lli ans;
char str[100002];
scanf("%d",&T);

	while(T--)
	{
		count=0;
		scanf("%d",&N);

		scanf("%s",str);
		for(i=0;i<N;i++)
		{
			if(str[i]=='1')
			count++;
		}
		
		if(count==1)ans=1;
		else if(count==0)ans=0;
		else
		{
			ans=(lli)count*(count-1);
			ans=ans/2;		
			ans=ans+count;
		}
		
		printf("%lld\n",ans);
	}



return 0;
}

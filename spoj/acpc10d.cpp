#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int t,n,i,min11,min21,min31,min1,min2,min3,a,b,c,a2,b2,c2,preA,preB,preC;
	t=0;
	while(1)
	{
		t++;
		scanf("%d",&n);
		if(n==0)break;
		
		scanf("%d%d%d",&a,&b,&c);		
		scanf("%d%d%d",&a2,&b2,&c2);		
		min1=b+a2;
		min2=b+ min(b2,min(a2+b2,c+b2));
		min3=min(min(b+c2,min2+c2),b+c+c2);
	
		//printf("min1:%d\tmin2:%d\tmin3:%d\n",min1,min2,min3);	
		for(i=2;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			min11=min(min1+a,min2+a);
			min21=min(min(min1+b,min3+b),min(min11+b,min2+b));
			
			min31=min(min2+c,min(min3+c,min21+c));
		
			min1=min11;
			min2=min21;
			min3=min31;
			//printf("min1:%d\tmin2:%d\tmin3:%d\n",min1,min2,min3);	
		}
		printf("%d. %d\n",t,min2);
	}
return 0;
}

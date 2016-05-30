#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a[8000],i;
		scanf("%d",&n);
		int max = -1000000000;
		int sum = 0;
		int flag = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>=0)
				flag = 1;
			sum+=a[i];
			if(max<sum)
			{
				max = sum;
			}
			if(sum<0)
			{
				sum = 0;
			}
		}
		if(flag==0)
		{
			max = -1000000000;
			for(i = 0;i < n;i++)
			{
				max = max<a[i]?a[i]:max;
			}
		}
		printf("%d\n",max);

	}
	return 0;
}

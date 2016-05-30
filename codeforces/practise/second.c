#include<stdio.h>

int main()
{
  int m,n;
  int a,temp,i;
  long long int ans;
  temp=1;
  scanf("%d%d",&n,&m);
  ans=0;
  scanf("%d",&a);
  ans=a-1;
  temp=a;
  for(i=1;i<m;i++)
    {
      scanf("%d",&a);
      if(temp>a)ans=ans+n-temp+a;
      else ans=ans+a-temp;

      temp=a;
    }
  printf("%lld\n",ans);


  return 0;
}

/*
#include<stdio.h>
int main()
{
	int g,g1,n,m;
	long long int calc;
	scanf("%d %d",&n,&m);
	scanf("%d",&g);
	calc=g-1;
	m--;
	while(m--)
	{
		scanf("%d",&g1);
		if(g1>=g)
			calc+=g1-g;
		else
			calc+=n-g+g1;
		g=g1;
	}
	printf("%lld\n",calc);
	return 0;
}
*/

#include<cstdio>
#include<cstdlib>
#define mod 1000000007

typedef long long int lli;
lli lcm(lli a,lli b);
int main()
{
	int T,N,arr[100005],cnt,j,idx,tcnt,i,flag;
	lli num1,num2;
	scanf("%d",&T);
	while(T--)
	{
		tcnt=0;
		int vst[100005]={0};
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&arr[i]);		
		}	
		idx=0;
		//vst[idx]=1;
		//cnt++;
		//idx=arr[idx]-1;
		num1=1;
		//printf("Hi\n");
		cnt=0;
		while(1)
		{
			
			
			if(vst[idx]==0)
			{
				//printf("Hi-if\n");
				vst[idx]=1;
				idx=arr[idx]-1;
				cnt++;			
				tcnt++;
			}
			else
			{
				//printf("Hi-else\n");
				num2=cnt;	
				cnt=0;
				//printf("num1 : %d  num2: %d\n",num1,num2);
				num1=lcm(num1,num2);
				//num1=num1;
				while(1)
				{
					flag=0;
					idx++;
					if(idx==N && tcnt==N){
						break;
					}
					else if(idx<N && vst[idx]==0){flag=1;break;}
					else
					{
						for(j=0;j<N;j++)
						{
							if(vst[j]==0)
							{
								flag=1;
								idx=j;
								break;
							}
						}
					}
					
				}	
				if(flag==0)
				break;		
			}
			
		}
		num1=num1%mod;
		printf("%lld\n",num1);
	}
	return 0;
}



lli lcm(lli a,lli b)
{
	//printf("num1 : %d  num2: %d",a,b);
	lli l,m,rem;
	lli temp;
	if(a>b){l=b;m=a;}
	else { l=a;m=b;}
	rem=m%l;
	while(rem!=0)
	{
		m=l;
		l=rem;
		rem=m%l;	
	}
	temp=l;
	temp=((lli)a*b)/temp;
		
	return temp;
}

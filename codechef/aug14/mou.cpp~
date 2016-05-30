#include<iostream>
#include<cstdio>

#define mod 1000000009
using namespace std;
typedef long long int lli;

lli pre[8000007];
//int num[1000004];
int count[8000007]={0};
int casea[8000007];
int diff[1000004];
int main()
{
	int T,n,i,k,a,b;
	lli ans,preAns;
	
	cin >>T;
	k=1;
	//for(i=0;i<8000007;i++)
		//count[i]=0;
/*	for(i=0;i<8000007;i++)
		casea[i]=k;*/
	while(T--)
	{
	  	scanf("%d",&n);
	  	scanf("%d",&a);
		for(i=1;i<n;i++)
		{
//			cin >> b ;
			scanf("%d",&b);
			diff[i-1]=b-a+4000000;
			a=b;
		}
		/*
		for(i=0;i<n-1;i++)
		{
			diff[i]=num[i+1]-num[i]+4000000;
			//cout << "diff" <<diff[i] << endl;
		}*/
		
		ans=2;
		count[diff[0]]=1;
		casea[diff[0]]=k;
		pre[diff[0]]=1;
		
		for(i=1;i<(n-1);i++)
		{	
			preAns=ans;
			//cout << "ans" <<ans <<endl;
			ans=ans*2;
			ans=ans%mod;
			if(count[diff[i]]==1 && casea[diff[i]]==k)
			{
				ans=(ans-pre[diff[i]]+mod);
				ans=ans%mod;
			}
			
			count[diff[i]]=1;
			casea[diff[i]]=k;
			pre[diff[i]]=preAns;
		}
		ans=(ans-1+mod)%mod;
//		cout << ans << endl;
		printf("%lld\n",ans);
	 	k++;
	}
	
	
	return 0;
	
}



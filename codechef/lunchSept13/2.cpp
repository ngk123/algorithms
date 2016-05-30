#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,i,a,max2,j,cnt;
	
	//vector<int> inp(10000005,0);
	cin >> T;
	while(T--)
	{
		cin >> n;
		int arr[1000004]={0}; 
		int inp[1000004]={0};	
		for(i=0;i<n;i++)
		{
			cin >> a;
			inp[a]=1;	
		}	
		int temp=sqrt(1000004)+1;
		arr[1]=0;
		arr[2]=0;
		int ans=0;
		for(i=2;i<=temp;i++)
		{
			max2=0;
			
			if(arr[i]==0)
			{
				if(inp[i]==1)max2=1;	
				for(j=2*i;j<1000004;j+=i)
				{
					cnt=0;
					arr[j]=1;
					int temp2=j;
					while(temp2%i==0)
					{
						temp2=temp2/i;
						cnt++;
					}
					
					if(inp[j]==1 && cnt>max2)
					max2=cnt;
				}
				
				ans+=max2;
			}
	
		}
		
		for(i=temp+1;i<=1000003;i++)
		{
			if(arr[i]==0)
			{
				for(j=i;j<1000004;j+=i)
				{
					if(inp[j]==1)
					{
						ans+=1;
						break;
					}
				
				}
			
			}		
		}
		
		
		cout << ans << endl;
	
	
	
	}

	return 0;
}



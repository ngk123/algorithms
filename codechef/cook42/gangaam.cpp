#include<bits/stdc++.h>
using namespace std;
typedef struct gangi
{
int time;
int flag;
int id;
}gangi;

bool comp(gangi a,gangi b)
{
	if(a.time!=b.time) return (a.time<b.time);
	else return (a.flag<b.flag);
}

typedef pair<int,int> pii;
//typedef vector<pii> vpii;
int main()
{
	int T,n,x,cnt,ans,i,maxId,maxT,j,f,temp;
	pii arr[401];
	gangi a[401],a1[401];
	cin >> T;
	while(T--)
	{
		int ig[201]={0};
		int entered[201]={0};
		cin >> n >> x;
		ans=0;
		for(i=0;i<n;i++)
		{
			cin >> a[2*i].time ;
			a[2*i].flag=0;
			a[2*i].id=i;
			a1[2*i].time =a[2*i].time ;
			a1[2*i].flag=a[2*i].flag;
			a1[2*i].id=a[2*i].id;
			
			cin >> a[2*i+1].time ;
			a[2*i+1].flag=1;
			a[2*i+1].id=i;
			a1[2*i+1].time =a[2*i+1].time ;
			a1[2*i+1].flag=a[2*i+1].flag;
			a1[2*i+1].id=a[2*i+1].id;				
		}		
//		sort(arr,arr+2*n);	
		sort(a,a+2*n,comp);	
						
		cnt=0;
		maxId=-1;	
		temp=0;	
		for(i=0;i<2*n;i++)
		{
			if(a[i].flag==0)
			{
				cnt++;
				entered[a[i].id]=1;
				if(cnt>=x && temp<(cnt-x+1))
				{
					maxT=-1;					
					ans++;
					for(j=0;j<n;j++)
					{
						if(entered[j]==1 && ig[j]!=1)
						{
							if(a1[2*j+1].time>maxT)
							{
								maxT=a1[2*j+1].time;
								maxId=j;
							}
						}
					}
					ig[maxId]=1;
					temp++;
				}				
				
			}
			else
			{
				cnt--;
				entered[a[i].id]=0;		
				if(ig[a[i].id]==1)temp--;
					
			}
				
		}				
		cout << ans << endl;					
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int update(lli seg[],lli child[],int segId,int L , int R , int p ,int q,int v)
{
	int mid;
	if(L>q || R < q )return 0;
	if(p<=L && R<=q)
	{
		seg[segId]+=v;
		return 0;
	}
	else
	{
		mid=(L+R)/2;	
		update(seg,child,2*segId+1,L,mid,p,q,v);
		update(seg,child,2*segId+2,mid+1,R,p,q,v);			
		child[segId]=child[2*segId+1]+child[2*segId+2]+(L-mid+1)*v+(R-mid)*v;		
	}
}


lli getSum(lli child[],int segId,int L , int R , int p ,int q)
{
	int mid;
	if(R < p || L >q )
	return 0;	
	if(p<=L && R<=q)
	{
		return child[segId];		
	}	
	else
	{
		mid=(L+R)/2;
		return getSum(child,2*segId+1,L,mid,p,q)+getSum(child,2*segId+2,mid+1,R,p,q);	
	}		
}

int main()
{
	lli seg[400000] ,ans;
	lli child[400000];
	int arr[100001];
	int t,n,p,q,v,c,i;
	
	cin >>t;
	
	while(t--)
	{
		memset(seg,400000,0);
		memset(arr,100001,0);
		cin >> n >> c;
		for(i=0;i<c;i++)
		{
			cin>>q;			
			if(q==0)
			{
				cin >> p >> q >> v;
				update(seg,child,0, 0, n-1, p-1,q-1,v);			
			}
			else
			{
				cin >> p >> q;
				ans=getSum(child,0,0,n-1,p-1,q-1);
				cout << ans << endl;				
			}
			
		}	
	}
	return 0;	
}
	

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli sum[4*100000];
lli csum[4*100000];

int update(lli sum[],int segId,int ss,int es,int p,int q,int val)
{	
	int mid;
	if(q<ss || p>es)return 0;
	
	if(p<=ss && es<=q)
	{
		sum[segId]+=val;	
		return 0;	
	}
	else
	{			
			mid=(ss+es)/2;
			update(sum,2*segId+1,ss,mid,p,q,val);
			update(sum,2*segId+2,mid+1,es,p,q,val);
			csum[segId]=csum[segId*2+1]+csum[segId*2+2]+(mid-ss+1)*sum[2*segId+1]+(es-mid)*sum[2*segId+2];
	}		
}

lli getSum(lli sum[],int segId,int ss,int es,int p,int q)
{   
	int mid;
	if(p>es || q<ss)
	{
		return 0;
	}
	lli sumf=sum[segId]*(min(q,es)-max(p,ss)+1);
	mid=(ss+es)/2;
	if(p<=ss && es<=q)
	{
		sumf+=csum[segId];
	}		
	else
	{
		sumf+=getSum(sum,2*segId+1,ss,mid,p,q)+getSum(sum,segId*2+2,mid+1,es,p,q);
	}
	return sumf;
	
}

int main()
{
	int t,n,p,q,c,Q,i,v;
	lli a;	
	cin >> t;
	while(t--)
	{	
		memset(sum,0,sizeof(sum));
		memset(csum,0,sizeof(csum));
		cin >> n >> c;
		for(i=0;i<c;i++)
		{
			cin >> Q;
			if(Q==0)
			{
				cin>> p >> q >> v;
				update(sum,0,0,n-1,p-1,q-1,v);				
			}
			else
			{
				cin >> p >> q;				
				a=getSum(sum,0,0,n-1,p-1,q-1);			
				cout << a << endl;
			}					
		}
	}
	return 0;
}


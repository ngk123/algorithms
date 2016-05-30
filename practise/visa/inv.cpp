#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;
void update(int seg[],int segId,int ss,int se,int a)
{
	int mid;
	if(a<ss || a>se)
	{
		return ;
	}
	if(ss==se)
	{	
		seg[segId]++;
		return ;
	}	
	else
	{
		seg[segId]++;
		mid=(ss+se)/2;
		update(seg,2*segId+1,ss,mid,a);
		update(seg,2*segId+2,mid+1,se,a);
	}
	return ;
	
}

lli greaterT(int seg[],int segId,int ss,int se,int l,int r)
{	
	int mid;
	if(l>se || r<ss)return 0;	
	if(l<=ss && se<=r)
	{
		return seg[segId];
	}
	else
	{
		mid=(ss+se)/2;
		return greaterT(seg,2*segId+1,ss,mid,l,r)+greaterT(seg,2*segId+2,mid+1,se,l,r);
	}
	return 0;
}

int main()
{
	int t,n,a,i,num,pre,shift;
	lli cnt,inv;
    shift=ceil(log2(200005));
    int seg[1<<(shift+1)];
    vector<pii> inp;
	int arr[200005];
	cin >>t;
	while(t--)
	{
		cin >> n;
		memset(seg,0,sizeof(seg));
		if(n==0) { cout << 0 << endl ; continue;}
		inv=0;
		for(i=0;i<n;i++)
		{
			cin >> a;		
			inp.push_back(pii(a,i));
		}	
		sort(inp.begin(),inp.end());
		cnt=1;
		pre=inp[0].first;
		arr[inp[0].second]=cnt;
		
		for(i=1;i<n;i++)
		{
			if(inp[i].first==pre)
			{
				arr[inp[i].second]=cnt;
			}
			else
			{
				cnt++;
				arr[inp[i].second]=cnt;
			}			
		}
		
		for(i=0;i<n;i++)
		{
			a=arr[i];
			cnt=greaterT(seg,0,0,n+1,a+1,n+1);
			inv+=cnt;
			update(seg,0,0,n+1,a);
		}
		inp.clear();		
		cout << inv << endl;
	} 
	return 0;
}

#include<iostream>
#include<algorithm>

int bSearch(int sum, int l, int r);
using namespace std;
int L[2001],a;
int main()
{
	int i,j,ans;
	while(1)
	{
		cin>>a;
		ans=0;
		if(a==0)break;
		
		for(i=0;i<a;i++)
		{
			cin>>L[i];
		}		
		sort(L,L+a);
		for(i=0;i<a-2;i++)
		{
			for(j=i+1;j<a-1;j++)
			{
				ans+=(a-bSearch(L[i]+L[j],j+1,a-1));
			}
		}
		cout << ans <<endl;
	}
	return 0;
}



int bSearch(int sum, int l, int r)
{
	int mid;
	mid=(l+r)/2;	
	if(l==r && L[l]>sum)return l;
	else if(l==r && L[l]<sum)return a;
	else if(L[mid]>sum) return bSearch(sum,l,mid);
	else if(L[mid]<=sum)return bSearch(sum,mid+1,r);
}



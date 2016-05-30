#include<iostream>
#include<vector>
using namespace std;

int constructSeg(int arr[],int sArr,int eArr,int seg[],int idx)
{
	int mid;
	if(sArr==eArr)
	{
		seg[idx]=arr[sArr];
		return arr[sArr];
	}		
	mid=(sArr+eArr)/2;	
	seg[idx]=constructSeg(arr,sArr,mid,seg,idx*2+1)+constructSeg(arr,mid+1,eArr,seg,idx*2+2);
	return seg[idx];
}

int getSum(int seg[],int segIdx,int l ,int r,int ss, int es)
{
	int mid;
	if(ss>r || es < l)
	{
		return 0;
	}
	
	if(ss>=l && es<=r)
	{
		return seg[segIdx];
	}
	else
	{
		mid=(ss+es)/2;
		return getSum(seg,2*segIdx+1,l,r,ss,mid)+getSum(seg,2*segIdx+2,l,r,mid+1,es);
	}
}

int updateSeg(int seg[],int segIdx,int idx,int val,int ss,int es)
{	
	int mid;
	if(ss>idx ||es< idx )
	{
		return 1;
	}	
	
	seg[segIdx]+=val;
	if(ss!=es)
	{	
		mid=(ss+es)/2;
		updateSeg(seg,segIdx*2+1,idx,val,ss,mid);
		updateSeg(seg,segIdx*2+2,idx,val,mid+1,es);
	}
	return 1;	
}



int main()
{
	int n,i,size,l,r,q,ans,idx,val,diff;
	int arr[200],seg[400];		
	cin >> n;	
	for(i=0;i<n;i++)
	cin >> arr[i];	
	constructSeg(arr,0,n-1,seg,0);
	size=2*n-1;
	for(i=0;i<size;i++)
	{
		cout << seg[i] << " ";
	}
	cout << endl;
	// q=0 for break;
	// q=1 to get sum of range
	// q=2 to update value at index so upate segment tree
	while(1)
	{
		cin >>q;
		if(q==0)break;		
		if(q==2)
		{
			cin >> l >> r;
			ans=getSum(seg,0,l,r,0,n-1);
			cout << ans << endl;			
		}
		else
		{
			cin >> idx >> val;
			diff=val-arr[idx];
			updateSeg(seg,0,idx,diff,0,n-1);
			arr[idx]=val;
			for(i=0;i<size;i++)
			{
				cout << seg[i] << " ";
			}
			cout << endl;
		}		
	}
	cout << endl;		
	return 0;
}




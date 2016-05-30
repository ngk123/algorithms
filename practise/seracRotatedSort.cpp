#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;

int searchPivot(int arr[],int low, int high)
{	
	int mid;
	if(high<low)return -1;
	if(high==low)return low;
	
	mid=(high+low)/2;
	
	if(mid>low && arr[mid]<arr[mid-1]) 
	{	
		return mid-1;
	}
	if(mid < high && arr[mid] > arr[mid+1])
	{
		return mid;
	}
	if(arr[low]>=arr[mid])
	{
		return searchPivot(arr,low,mid-1);
	}
	else
	{
		return searchPivot(arr,mid+1,high);
	}
}

int bSearch(int arr[] ,int tar, int low, int high)
{
	int mid;
	if(high<low)return -1;
	mid=(high+low)/2;
	if(high ==low && arr[low]!=tar)
	{
		return -1;
	}
	if(arr[mid]==tar)
	{
		return mid;
	}
	if(arr[mid] > tar)
	{
		return bSearch(arr,tar,low,mid-1);
	}
	else
	{
		return bSearch(arr,tar,mid+1,high);
	}

}



int main()
{
	int T,n,arr[100],i,target,pos,piv;
	cin >> T;
	while(T--)
	{
		cin >> n;
	
		for(i=0;i<n;i++)
		{
			cin >> arr[i];	
		}
		cin >> target;
		piv=searchPivot(arr,0,n-1);
		if(piv==-1)
		{
			cout<< "hi" << endl;
			pos=bSearch(arr,target,0,n-1);
		}
		else
		{
			pos=bSearch(arr,target,0,piv);
			if(pos==-1)pos=bSearch(arr,target,piv+1,n-1);
		}
		cout << "Final Position :" << pos << endl;	
	
	}
return 0;

}


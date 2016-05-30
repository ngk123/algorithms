#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;
typedef long long int lli; 
 
lli  _mergeSort(lli arr[], lli temp[], lli left, lli right);
lli merge(lli arr[], lli temp[], lli left, lli mid, lli right);
 
lli mergeSort(lli arr[], lli array_size)
{
   lli *temp = (lli *)malloc(sizeof(lli)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}

lli _mergeSort(lli arr[], lli temp[], lli left, lli right)
{
  lli mid, inv_count = 0;
  if (right > left)
  {
    
    mid = (right + left)/2;
  

    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);

    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}

lli merge(lli arr[], lli temp[], lli left, lli mid, lli right)
{
  lli i, j, k;
  lli inv_count = 0;
  
  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
  
  
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  
  while (j <= right)
    temp[k++] = arr[j++];
  
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
 
int main()
{
			
	lli t,arr[100001],k,n,i,j,l;
	lli temp,ans;
	cin >> t;
	for(j=0;j<t;j++)
	{
		cin >> n >> k;
		
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
		}		
		temp=mergeSort(arr, n);
		if(temp-k>=0)
		{
			ans=temp-k;
		}
		else
		{
			sort(arr,arr+n);
			for(l=1;l<n;l++)
			{
				if(arr[l]==arr[l-1])break;
			}
			if(l==n)
			{
				ans=(k-temp)%2;	
			}
			else
			{
				ans=0;
			}
		}		
		cout << "Case "<<j+1<<": "<< ans << endl;
	}
	
  //int arr[] = {1, 20, 6, 4, 5};
  
 // getchar();
  return 0;
}


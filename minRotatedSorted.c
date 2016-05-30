#include<stdio.h>
#include<stdlib.h>

int findmin(int a[],int low, int high);

int main()
{
  int ans,a[1000],i,len,high,low;

  scanf("%d",&len);

  for(i=0;i<len;i++)scanf("%d",&a[i]);

  low=0;
  high=len-1;
 ans= findmin(a,low,high);

 printf("\nans:%d\n",ans);
  return 0;
}


int findmin(int a[],int low, int high)
{
  int mid;
 
  if(low==high)return a[low];
 
  if(high==low+1 && a[high]>=a[low])return a[low];
 
  if(high==low+1 && a[high]<a[low])return a[high];
  
  mid=(low+high)/2;
  
  if(a[mid] <  a[high])return findmin(a,low,mid);

  if(a[mid]>a[high])return findmin(a,mid,high);
 
  

  //if(a[mid+1]>a[mid] && a[mid-1] < a[mid])return (a,low,mid-1);
  
 





}

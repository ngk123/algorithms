#include<stdio.h>

#include<stdlib.h>

#define MAX 100001



void partition(long long int arr[],long long int low,long long int high);
void mergeSort(long long int arr[],long long int low,long long int mid,long long int high);





int main()
{
  long long int N, a[100001],X,i,j,b[100001],temp,sum,ans;

  scanf("%lld",&N);
  j=0;
  for(i=0;i<N;i++)
    {
         scanf("%lld",&a[i]);
	 if(a[i]<0)
	   {
	     b[j]=a[i];j++;
	   }
    }
  scanf("%lld",&X);
  if(j>0)
    {
      partition(b,0,j-1);
    }
  
  /*printf("After merge sorting elements are: ");
  
  for(i=0;i<j;i++)
    {
      printf("%lld ",b[i]);
    }
  */
  ans=0;
  
  if(X==0)
      {
	ans=0;

      }
   else if( X==1 && j>0)
      {
	ans=0-b[0];
      }
    else if(j==0)
      {
	ans=0;
      }
    
    else if(X>j)
      {
	for(i=0;i<j;i++)
	  ans=ans-b[i];
	
      }
    else
      {
	temp=0-b[X-1];
	ans=temp*X;
	sum=0;
	for(i=0;i<(X-1);i++)
	  {
	    sum=sum-b[i]-temp;
	    
	  }
	ans=ans+sum;
      }

printf("%lld\n",ans);

  return 0;


}


void partition(long long int arr[],long long int low,long long int high){

   long long  int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(long long int arr[],long long int low,long long int mid,long long int high){

    long long int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}


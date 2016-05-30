#include<stdio.h>
#include<stdlib.h>

#define MAX 100001

void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);


int main()
{
  
  int T,N,A[100001],B[100001],i,j,count1,count3,temp,idx,flag;
  long long int sum;
  float ans;
  
  //  __compar_fn_t temp;
  scanf("%d",&T);

  while(T--)
    {
      scanf("%d",&N);
      int cnt[100001]={0};    

      count1=0;
      count3=0;
      for(i=0;i<N;i++)
	{
	  scanf("%d",&A[i]);
	}
      //  qsort(A,N,sizeof(int),temp);
      for(i=0;i<N;i++)
	{
	  ///	  printf("%d",A[i]);
	}
      partition(A,0,N-1);
      
      for(i=0;i<N;i++)
	{
	  scanf("%d",&B[i]);
	}
      partition(B,0,N-1);
      
      temp=0;

      idx=N;
      for(i=0;i<N;i++)
	{
	  if(B[i]==1)count1++;
	  if(B[i]==3)count3++;
	  if(B[i]>4){idx=i;break;}
	}
      //temp=idx;
      sum=0;
      for(i=0;i<N;i++)
	{
	  if(A[i]==1)cnt[i]=0;
	  else if(A[i]==2 || A[i]==4)cnt[i]=count1+N-idx;
	  else if(A[i]==3)cnt[i]=N-count3;
	  else if(A[i]>4)
	    {
	      flag=0;
	      for(j=idx;j<N;j++)
		if(A[i]<B[j])
		  {
		    flag=1;
		    idx=j;
		    cnt[i]=N-idx+count1;
		    break;
		  }
	      if(flag==0)cnt[i]=count1;
	    }
	  sum+=cnt[i];
	}




      /*      for(i=0;i<N;i++)
	{
	  if(A[i]==1)cnt[i]=0;
	  if(A[i])
	  for(j=temp;j<N;j++)
	    {
	      if(B[j]==1)count++;
	      if(B[j]>1)break;
	    }

	  temp=j;
	}
      
      sum=0;
      
      for(i=0;i<N;i++)
	{
	  switch(A[i])
	    {
	    case 1:
	      sum+=0;
	      break;
	      
	    case 2:
	      for(j=0;j<N;j++)
		{
		  if(B[j]==1 || B[j]>4)sum+=1;
		}
	      break;
	      
	    case 3:
	      for(j=0;j<N;j++)
		{
		  if(B[j]!=3)
		    {
		      sum+=1;
		    }
		 
		}
	      break;	      

	     case 4:
	      for(j=0;j<N;j++)
		{
		  if(B[j]==1 || B[j]>4)sum+=1;
		}
	      break;

	    default:
	      for(j=0;j<N;j++)
		{
		  if(B[j]==1 || B[j]>A[i])sum+=1;
		}
	      break;
	      
	      }
	}
      */

      //  printf("Sum:%d\n",sum);
      ans=(float)sum/N;
      printf("%f\n",ans);


    }
  return 0;
}






void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

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

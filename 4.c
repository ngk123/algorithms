#include<stdio.h>
#include<stdlib.h>


int cmpfunc (const void * e, const void * f)
{
  return (  (*(int*)e)- (*(int*)f) );
}


int main()
{
  int n,T,N,k,boy[1003],girl[1003],flag,i,diff[100000],diff2[100000]={0},count,num[100000],check;
  long long int ans;
  scanf("%d",&N);
  
  n=N;
  i=0;
  while(N--)
    {
      scanf("%d",&num[i]);
      i++;
    } 
  
  qsort(num,n,sizeof(int),cmpfunc);
  
  for(i=1;i<n;i++)
    {
      diff[i-1]=num[i]-num[i-1];
    }
  
  count=0;
  
  for(i=0;i<n-1;i++)
    {
      if(diff2[diff[i]]==0)
	{
	  count++;
	  diff2[i]=1;
	}
    }
  
  
  check=0;
  
  for(i=0;i<n-1;i++)
    {
      if(diff[i]==diff[i-1])check=0;
      else
	{
	  check=1;
	  count+=(n-2-i);
	}
    }
  printf("%d\n",count);
  
  return 0;
}

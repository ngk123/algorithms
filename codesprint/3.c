#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int ans(int n)
{
  
  long long  int num[100000],base;
  int power,i,j,k;
  num[0]=9;num[1]=90;num[2]=99;
  if(num[0]%n==0)return num[0];
  else if(num[1]%n==0)return num[1];
  else if(num[2]%n==0)return num[2];
  power=2;
  i=2;
  while(1)
    {

    
      k=i+1;
      base=pow(10,power)*9;

      num[k]=base;
      if(num[k]%n==0)return num[k];
      //  printf("%d-%lld\n",k,num[k]);
      k++;
      for(j=0;j<=i;j++)
	{
	  num[k]=base+num[j];
	  if(num[k]%n==0)return num[k];
	  //  printf("n-%lld\n",num[k]);
	  k++;
	}
      i=k-1;
      power++;

      
    }


    
  
}


int main()
{
  int T,n;
  long long int number;  
  scanf("%d",&T);
  while(T--)
    {
      scanf("%d",&n);
      number=ans(n);
      printf("%lld\n",number);
  
    }

  return 0;

}

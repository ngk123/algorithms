#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
  unsigned long long int p,n,m,k,i,ans,dig,temp,j,t,power,flag,bits[20],bitst;
  scanf("%llu",&p);
  
  while(p--)
    {
      scanf("%llu%llu%llu",&n,&k,&m);
      ans=0;
      temp=k;
      flag=0;
      t=1;
      i=0;
      
      while(temp>0)
	{
	  bits[i]=temp&1;
	  i++;
	  temp=temp>>1;
	}
      bitst=i;
      
      while(1)
	{
	  
	  for(j=0;j<bitst;j++)
	    {
	      if(bits[j]==1){ans+=n*pow(2,j);}
	      if(ans>m){printf("%llu\n",t-1);flag=1;break;}
	    }
	  
	  if(flag==1)break;
	  n=ans;
	  ans=0;
	  t++;
	}
    }
  
  return 0;
}

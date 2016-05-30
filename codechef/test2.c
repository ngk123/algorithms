#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,j,count,min,max,ans,m,n,a[101],b[101],i;
  scanf("%d",&t);
  while(t--)
    {
      
      scanf("%d",&m);
      
      for(i=0;i<m;i++)
	scanf("%d",&a[i]);
      
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
	scanf("%d",&b[i]);
      i=0;
      j=0;
      count=0;
      while(1)
	{
	  if(a[i]==b[j])
	    {
	      i++;
	      j++;
	      count++;
	    }
	  
	   else if(a[i]<b[j])
	     i++;
	   
	   else
	     j++;
	  
	  if(i>=m || j>=n)
	    break;
	}
      // printf("%d\n",count);
      if(m>n)
	{
	  min=n;
	  max=m;
	}
      else
	{
	  min=m;
	  max=n;
	}
      ans=max-count;

      printf("%d\n",ans);
      
    }
  return 0;
}

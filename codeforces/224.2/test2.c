#include<stdio.h>
#include<stdlib.h>


int cmpfunc (const void * e, const void * f)
{
  return (  (*(int*)e)- (*(int*)f) );
}



int mani()
{
  int n,num[100005];


  scanf("%d",&n);


  for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);
    }
  
  qsort(num,n,sizeof(int),cmpfunc);
 
  if(n==1){printf("-1\n");return 0;}
  else if(n==2)
    {
      if((num[0]-num[1])%2==0)
	{
	  printf("3\n"); 
          printf("%d %d %d\n",2*num[0]-num[1],(num[0]+num[1])/2, 2*num[1]-num[0])
	}
      else 
	{
	  printf("2\n");
          printf("%d %d\n",2*num[0]-num[1],2*num[1]-num[0]);           
	}
    }

  
  else 
    {
      check=0;
      diff1=num[1]-num[0];
      l=num[0];
      r=num[1];
      c1=1;
      c2=0;
      for(i=2;i<n;i++)
	{
	  diff=num[i]-num[i-1];

	  if(diff==diff1){c1+=1;}

	  else if(check==0){check=1; diff2=diff; r2=num[i]; l2=num[i-1];}

	  else if(check==1 && diff!=diff2){pintf("0\n");eturn 0;}

	  else if(check==1 && diff==diff2){c2+=1;}

	}
   
      if(c2==0)
	{
	  printf("2\n%d %d\n",2*num[0]-num[1],2*num[n-1]-num[n-2]);
	}
      
      else if(c1>1 && c2>1){ printf("0\n"); return 0;}

      else if()
      

    }

  return 0;
}

#include<stdio.h>

int main()
{
    int i,S[101],common,s,t,j,s1,t1,se,te,change;
    scanf("%d",&i);
    while(i-->0)
    {
      se=0;te=0;common=0;
      for(j=0;j<101;j++)
	{
	  S[j]=0;
	}
      scanf("%d",&s);
      for(j=0;j<s;j++)
	{
	  scanf("%d",&s1);
	  S[s1]=1;
	}                     
      scanf("%d",&t);
      for(j=0;j<t;j++)
	{
	  scanf("%d",&t1);
	  if(S[t1]==1)
	    common++;
	}                     
     se=s-common;
     te=t-common;
     if(se>te)
     printf("%d\n",se);
     else
     printf("%d\n",te);
    }
    
    return(0);    
}

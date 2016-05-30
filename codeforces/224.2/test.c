#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int n,num[1002],l,r,idx,sum1,sum2,t,max,i;
  char s[1000],s2[1000];
  int len1,len2,temp,diff,diff2,check;
  scanf("%s",s);
  scanf("%s",s2);
  len1=strlen(s);
  check=0;
  l=0;
  r=0;
  for(i=0;i<len1;i++)
    {
      if(s[i]=='|'){check=1;continue;}

      if(check==0)l+=1;
      else r+=1;

    }

  len2=strlen(s2);
  diff=l-r;
  diff2=r-l;
  if(diff>0 && len2<diff)printf("Impossible");
  
  else if(diff2>0 && len2<diff2)printf("Impossible");

  else if(diff==0 && len2%2==1)printf("Impossible");


  else  if(diff==0 && len2%2==0)
    {
      for(i=0;i<len1/2;i++)printf("%c",s[i]);
      
      for(i=0;i<len2/2;i++)printf("%c",s2[i]);

      printf("|");

      for(i=(len1/2)+1 ;i<len1;i++)printf("%c",s[i]);
      
      for(i=(len2/2);i<len2;i++)printf("%c",s2[i]);
    }
  
  else if(diff>0)
    {
      for(i=0;i<l;i++)printf("%c",s[i]);
      
      if(diff==len2)
	{ 
	  printf("|");
	  temp=0;
	}
      else
	{
	  
	  temp=(len2-diff)/2;
	  for(i=0;i<temp;i++)printf("%c",s2[i]);
	  printf("|");
	}
      
      for(i=l+1;i<len1;i++)printf("%c",s[i]);
      for(i=temp;i<len2;i++)printf("%c",s2[i]);
     
    }

  else if(diff<0)
    {
      for(i=0;i<l;i++)printf("%c",s[i]);
      
      if(diff2==len2)
	{
          for(i=0;i<len2;i++)printf("%c",s2[i]);
	  printf("|");
	  for(i=l+1;i<len1;i++)printf("%c",s[i]);
	}

      else
	{
	  for(i=(len2-diff2)/2 ; i<len2;i++)printf("%c",s2[i]);
	  printf("|");
	  
	  temp=(len2-diff2)/2;
	  for(i=0;i<temp;i++)printf("%c",s2[i]);
	  for(i=l+1;i<len1;i++)printf("%c",s[i]);
	}      
      
    }

  printf("\n");
  return 0;
}

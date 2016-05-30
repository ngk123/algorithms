#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  int T,i,ans,len1,len2;
  char str1[10004],str2[10004];

  cin>>T;

  while(T--)
    {
      int c1[200]={0}; 
      int c2[200]={0};
      scanf("%s",str1);
      scanf("%s",str2);
      
      len1=strlen(str1);
      len2=strlen(str2);
      
      for(i=0;i<len1;i++)
	{
	  c1[(int)str1[i]]++;
	}
  
      for(i=0;i<len2;i++)
	{
	  c2[(int)str2[i]]++;
	}

      ans=0;
      for(i=0;i<200;i++)
	{
	  if(c1[i]>c2[i])ans+=c2[i];
	  else ans+=c1[i];
	}

      cout<<ans<<endl;

    }




}

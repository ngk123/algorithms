#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<cstdlib>

#define mod 1000000007

using namespace std;
typedef long long int lli;
typedef unsigned long long ull; 
int read()
{
  int d=0,temp;
  char c=getchar_unlocked();

  while(c=='\n' || c==' ' || c=='\t')
    c=getchar_unlocked();
  
  d=(int)c-'0';
  c=getchar_unlocked();
  while(c!=' ' && c!='\n' && c!='\t')
    {
      temp=(int)c-'0';
      d=d*10+temp; 
      c=getchar_unlocked(); 
    }
  return d;
}




int main()
{
   
 int T,a,b,c,n,tempM,i,mhT,mnT;
  //  int transfer;
 ull  sum;
  T=read();
  while(T--)
    {
      sum=1ULL;
      a=read();
      b=read();
      c=read();
      n=read();
      //      scanf("%d%d%d%d",&a,&b,&c,&n);
      if(n==1)
	{
	  printf("1\n");
	  continue;
	}
      
      priority_queue<int> maxH;
      priority_queue<int ,vector<int>, greater<int> > minH;
      
      ull  temp=(1ULL*a*1+1ULL*b*2+c)%mod;
      // temp=(int)temp1;
      sum+=temp;
      if(temp>1)
	{
	  minH.push(temp);
	  maxH.push(1);
	}
      else
	{
	  minH.push(1);
	  maxH.push(temp);
	}
      
      
      for(i=3;i<=n;i++)
	{
	  tempM=maxH.top();
	  temp=(1ULL*a*tempM+1ULL*b*i+c)%mod;
	  //  temp1+=(((lli)b)*i)%mod;
      //  temp1+=c%mod;
	  //	  temp=(int)temp1; 
	  //  cout<<"median :"<<tempM<<"insert :"<<temp<<endl;
	  sum+=temp;

          mhT=maxH.top();
          mnT=minH.top();
	  
	  if(i%2==1)
 	    {   
	      
	      if(mhT>=temp)
		{
		  maxH.push(temp);
		}
	      else if(mnT<temp)
		{
		  minH.push(temp);
                  //transfer=mnT;
		  minH.pop();
		  maxH.push(mnT);
		}
	      else
		{
		  maxH.push(temp);
		}
	      
	    }
	  else
	    {
	      if(mhT<=temp)
		{
		  minH.push(temp); 
		}
	      else
		{
		  maxH.push(temp);
		  //		  transfer=mhT;
		  maxH.pop();
		  minH.push(mhT);
		}      	    
	    }
	 
	}    
      cout<<sum<<endl;     
    }
  return 0;
}

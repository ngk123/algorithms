#include<iostream>

#define INF 10000000

using namespace std;

int main()
{
  int N,target,Q,min,i,j,A[1000005];
  int minR[1000005]={0};
  
  cin>>N;
  
  for(i=0;i<N;i++)
    {
      cin>>A[i];
    }

 
  
  for(i=0;i<N;i++)
    {
      min=INF;
      for(j=i;j<N;j++)
	{
	  if(A[j]<=min){min=A[j];}
	  minR[min-1]++;
	}
    }

  cin>>Q;

  for(i=0;i<Q;i++)
    {
      cin>>target;
      cout<<minR[target-1]<<endl;
    }


  return 0;
}

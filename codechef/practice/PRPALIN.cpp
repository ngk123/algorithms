#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>

using namespace std;

int isPrime(int a)
{
  int temp,i;
  temp=sqrt(a);
  
  if(a==2) return 1;
  if(a%2==0) return 0;
   
   for(i=3;i<=temp;i+=2)
   {
   
   	if(a%i==0)return 0;
   
   }  
  
  return 1;
  
}


int isPal(int n)
{

	int r=0,temp;
	temp=n;
	
	while(temp!=0)
	{
		r=r*10;
		r+=temp%10;
		temp=temp/10;
	}
	
	if(r==n)
	{
	return 1;
	}

	return 0;
}


int main ()
{
    int T,n,i,j,N;	
	 scanf("%d",&N);
	 
	 for(i=N; ;i++)
	 {
	 	if(isPal(i)==1)
	 	{
	 		if(isPrime(i)==1)
	 		{
	 			printf("%d\n",i);
	 			break;
	 		}
	 	
	 	
	 	}
	 }
	return 0;
}


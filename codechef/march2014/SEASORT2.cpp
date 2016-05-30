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
void reverse(int start, int end);
int a[10001];
int ansL[10001],ansR[10001];
int count1=0;;


int main ()
{
    int T,n,i,j,min,minIdx,inIdx,k;	
    
	cin>>n;
	 
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];	 
	 }
	 
	 for(i=0;i<n;i++)
	 {
	    inIdx=i;
	 	min=a[i];
	 	minIdx=i;
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[j]<min)
	 		{
	 			minIdx=j;
	 			min=a[j];	 		
	 		}
	 			 	
	 	}
	 	if(i!=minIdx)
	 	{		
	 		ansL[count1]=i;
	 		ansR[count1]=minIdx;
	 		count1++;
	 		reverse(i,minIdx);
	 	}
	 }
	 
	 cout<<count1<<endl;
	 
	 
	 for(i=0;i<count1;i++)
	 {
	 	cout<<ansL[i]+1<<" "<<ansR[i]+1<<endl;	 
	 }
	return 0;
}

void reverse(int start, int end)
{
	int i,temp,length;
	length=(end-start)/2;
	length=start+length;
	for(i=start;i<=length;i++)
	{
	    
		temp=a[end];
		a[end]=a[i];
		a[i]=temp;
		end--;
	}
	return;
}



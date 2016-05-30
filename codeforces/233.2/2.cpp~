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


int main ()
{
    int T,n,i,j,len,flag;	
    char str[51];
    long long int count;
	cin>>n;
	
	scanf("%s",str);
	
	len=strlen(str);
	 count=0;
	 
	 flag=0;
	 for(i=len-1;i>=0;i--)
	 {
	 	if(str[i]=='B' && flag==0){count+=1; flag=1;}
	 	else if(str[i]=='B' && flag==1){count=count*2+1;}
	 	else if(str[i]=='R' && flag==1){count=count*2;}
	 }
	 cout<<count<<endl;
	
	
	return 0;
}


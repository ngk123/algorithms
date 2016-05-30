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

int read()
{
char c;
int d=0;

c=getchar();

while(1)
{
   if(c=='\n' || c=='\t' || c==' ')break;
	d=d*10+c-'0';
	c=getchar();
}

return d;
}


int main ()
{
    int T,n,i,j,h,r;
    double ans,total;
    
    T=read();
    //printf("%d",T);
    while(T--)
    {
        h=read();
		r=read();		
		total=(r+1);
		ans=1/total;
		printf("%.9lf\n",ans);
	   
    }
    	
	 
	return 0;
}


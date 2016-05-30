/* Shubhang Verma */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

bool checkavailable(ll t);
long long int a[200000];
long long int b[200000];
int n,m;



int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i= 0 ; i< n ; i++)
            cin>>a[i];
        for(int i=0 ; i<m ; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        ll low = 0;
        ll high = 1<<30;
        while(low < high)
        {
            ll mid = (low + high)/2;
            if(checkavailable(mid) == true)
                high = mid;
            else
                low = mid+1;
        }        
        cout<<low<<endl;
    }
    return 0;
}

bool checkavailable(ll t)
{
    int s = 0;
    int i = 0 ; 
    int j = 0;
    while(j < m && i < n)
    {
        if(abs(a[i] - b[j]) <= t)
        {
            i++;
            j++;
        }
        else
            j++;
    }
    if(i== n)
        return true;
    else
        return false;
}


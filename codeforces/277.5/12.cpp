#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;


int main()
{
    int n,i,t2,temp,cnt=0,a,j;
    vector<int> v,v2;
    vector<pii> vp;
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
    {
        temp=v2[i];
        for(j=i;j<n;j++)
        {
            if(v[j]==temp)
            {
                if(i!=j)
                {
                cnt++;
                vp.push_back(pii(i,j));
                t2=v[i];
                v[i]=temp;
                v[j]=t2;                
                }
                break;
            }
        }
        
    }
    
    cout << cnt << endl;
    
    for(i=0;i<vp.size();i++)
    {
        cout << vp[i].first << " "<< vp[i].second << endl;
    }
    
    

    return 0;
}

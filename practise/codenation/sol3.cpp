#include<bits/stdc++.h>
using namespace std;
int graph[27][27];
int c[27];
int mp[27];
vector<string> v;
 
int main()
{   int n,numchar=0;
    cin>>n;
    v.resize(n);
    for(int i = 0 ; i<n ; i++)
    {   cin>>v[i];
        for(int j= 0; j < v[i].size() ; j++ )
        {
            mp[v[i][j]-'a']++;
        }
    }
    
    for(int i = 0; i<26; i++)
        if(mp[i])
            numchar++;
 
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1; j < n ; j++)
        {
            int idx1=0,idx2=0;
 
            while(idx1<v[i].length() && idx2 < v[j].length())
            {
                if(v[i][idx1]!=v[j][idx2])
                {
                    if( graph[  v[i][idx1]-'a'  ][ v[j][idx2]-'a' ] == 0 )
                        c[ v[j][idx2]-'a' ]++;
                    graph[  v[i][idx1]-'a'  ][ v[j][idx2]-'a' ] = 1;
 
                    break;
                }
                idx1++;
                idx2++;
 
            }
 
        }
    }
 
    map<char,int> mm;
 
    for(int i = 0 ; i<26 ;i++)
    {
        if(mp[i])
            mm[i+'a'] = 1;
    }
 
    int temp[27];
 
    int i = 0;
     while( i < numchar )
    {
        for(int j = 0 ; j<26; j++)
            temp[j] = c[j];
            
        for(int j = 0 ; j<26; j++)
        {
            if( mm[j+'a'] == 1 && c[j]==0 )
            {
                i++;
                mm[j+'a'] = 0;
                
                cout<<char(j+'a');
 
                for(int k = 0 ; k<26 ; k++)
                {
                    if(graph[j][k] == 1)
                    {
                        temp[k]--;
                    }
                }
 
            }
        }
        cout<<endl;
        for(int j = 0 ; j<26; j++)
            c[j] = temp[j];
    }
 
 
    return 0;
}

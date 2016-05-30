#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<cctype>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
using namespace std;
#define pb push_back
#define pi 3.141592653589793238462643383
vector<int> v[101];
int first_zero(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==0)
            return i;
    }
}
int main()
{
     
    int n,m,i,k,j,a,temp;
    int outdegree[101]={};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d",&a);
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%d",&temp);
            v[temp-1].pb(a-1);
            outdegree[a-1]++;
        }
    }
    vector<int> ans;
    for(i=0;i<n;i++){
        j = first_zero(outdegree,n);
        
        ans.pb(j+1);
        outdegree[j]=-1;
        for(k=0;k<v[j].size();k++)
            outdegree[v[j][k]]--;
    }
    for(i=0;i<n-1;i++)
        printf("%d ",ans[i]);
    printf("%d\n",ans[i]);
     
     
}

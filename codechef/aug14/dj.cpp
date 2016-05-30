#include <iostream>
#include <set>
#include <vector>
#include <cstdio>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
 
const int MAX = 100001;
//const int MAXINT = 100000000000;
 
int n;
vvii G(MAX);
vector<long long int> D(MAX,100000000000);
 
void Dijkstra(int s)
{
    set<ii> Q;
    D[s] = 0;
    Q.insert(ii(0,s));
 
    while(!Q.empty())
    {
        ii top = *Q.begin();
        Q.erase(Q.begin());
        int v = top.second;
        int d = top.first;
 
        for (vii::const_iterator it = G[v].begin(); it != G[v].end(); ++it)
        {
            int v2 = it->first;
            int cost = it->second;
            if (D[v2] > D[v] + cost)
            {
                if (D[v2] != 100000000000)
                {
                    Q.erase(Q.find(ii(D[v2], v2)));
                }
                D[v2] = D[v] + cost;
                Q.insert(ii(D[v2], v2));
            }
        }
    }
}
 
int main()
{
    int m, s, t = 0;
    scanf("%d %d", &n, &m);
 	s=1;
 	t=n;
    for (int i = 0; i < m; i++)
    {
        int a, b, w1,w2;
        w1=1;
        w2=1000000;
        scanf("%d %d", &a, &b);
        G[a - 1].push_back(ii(b - 1, w1));
        G[b - 1].push_back(ii(a - 1, w2));
    }
 
    Dijkstra(s - 1);
 
    printf("%lld\n", D[t - 1]/1000000);
 
    return 0;
}

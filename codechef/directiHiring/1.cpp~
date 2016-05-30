#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int main()
{	
	int maxt,cnt,i,N,b,c,T;
	vector<pii> a;
	cin >> T;
	while(T--)
	{
		cin >> N;
		for(i=0;i<N;i++)
		{
			cin >> b >> c;
			a.push_back(pii(b,1));
			a.push_back(pii(c,0)); 
		}
		sort(a.begin(),a.end());
		maxt=1;
		cnt=1;
		for(i=1;i<2*N;i++)
		{
			if(a[i].second==0)cnt--; 
			else cnt++;
			if(maxt<cnt)maxt=cnt;
		}
		
		cout << maxt << endl;
		a.clear();
		
	}
	
	return 0;
}

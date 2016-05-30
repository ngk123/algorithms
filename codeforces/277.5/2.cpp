#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,m,b[101],g[101],i,j,cnt;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> b[i];
	}
	sort(b,b+n);
	
		cin >> m;
	for(i=0;i<m;i++)
	{
		cin >> g[i];
	}
	sort(g,g+n);
	
	for(i=0,j=0;i<n&&j<m;)
	{
		if(abs(b[i]-g[j]) <=1)
		{
			cnt++;
			i++;j++;
		}
		else if(b[i]<g[j])
		{
			i++;
		}
		else if(b[i]>g[j])
		{
			j++;
		}
	}
	cout << cnt << endl;
	return 0;
}

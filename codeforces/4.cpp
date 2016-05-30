#include<iostream>
#include<map>
using namespace std;

map<int,int> a,c;
int b[1000002],f[1000002],d[1000002];

int main()
{
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> b[i];
		if(a.find(b[i])==a.end())
		{
			a.insert(pair<int,int>(b[i],1));
			f[i]=1;		
		}
		else
		{
			a[b[i]]++;
			f[i]=a[b[i]];
		}		
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(c.find(b[i])==c.end())
		{
			c.insert(pair<int,int>(b[i],1));
			d[i]=1;		
		}	
		else
		{
			c[b[i]]++;
			d[i]=c[b[i]];
		}
	}	
	
	for(i=0;i<n;i++)
	{
		cout << f[i] << " " ;
	}
	cout << endl;
	for(i=0;i<n;i++)
	{
				cout << d[i] << " " ;
	}
	
	
	
	return 0;
}

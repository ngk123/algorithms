#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main()
{
	multimap<int,int> a;
	multimap<int,int>::iterator it;	
	a.insert(pii(100,30));
	a.insert(pii(10,20));
	a.insert(pii(100,20));
	for(it=a.begin();it!=a.end();++it)
	{
		cout << (*it).first << " "<< (*it).second << endl;
	}
	
	return 0;
}

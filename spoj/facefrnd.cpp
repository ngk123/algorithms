#include<iostream>
#include<set>
using namespace std;

int main()
{
	
	int n,a[101],b,c,i,j;
	set<int> foff;
	set<int>::iterator it;

	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		//foff.insert(a[i]);
		cin >> b;
		for(j=0;j<b;j++)
		{
			cin >> c;
			foff.insert(c);
		}
	}

	for(i=0;i<n;i++)
	{
	//		it=foff.find(a[i]);
		foff.erase(a[i]);
	}
	cout << foff.size() << endl;
	return 0;
}

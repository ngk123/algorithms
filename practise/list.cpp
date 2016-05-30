#include<iostream>
#include<list>

using namespace std;
int main()
{
	int i;
	list<int> a;
	list<int>::iterator it;
	
	for(i=0;i<10;i++)
	{
		a.push_back(10-i);
	}
	
	//cout << a[2] << endl;
	for(it=a.begin();it!=a.end();++it)
	cout << (*it) << " ";
	cout << endl;
	a.remove(3);
	
	a.sort();
	
	for(it=a.begin();it!=a.end();++it)
	cout << (*it) << " ";
	//cout << "Found it : " << (*it) << endl;
	return 0;
}

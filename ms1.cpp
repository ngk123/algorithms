#include<iostream>
#include<vector>
#include<string>
using namespace std;

typedef pair<string,int> psi;
int main()
{
	int n,i;
	vector<pair<string,int> > a;
	vector<pair<string,int> >::iterator it;
	string b;
	cin >> n;
	getline(cin ,b);
	for(i=0;i<n;i++)
	{
		getline(cin ,b);
		if(!(b.empty()))
		{
			a.push_back(psi(b,i+1));
		}			
	}	
	
	cin >> b;
		
	for(i=0;i<n;i++)
	{
		if(a[i].first==b){cout << a[i].second << endl;break;}
	}

	return 0;

}

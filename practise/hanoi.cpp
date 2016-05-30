#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void hanoi(char from,char to,char mid ,int n)
{
	if(n==0) return ;
	hanoi(from,mid,to,n-1);
	cout << "From " << from << " to " << to << endl;
	cnt++;
	hanoi(mid,to,from,n-1);
}


int main()
{
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cnt=0;
		hanoi('A','C','B',n);
		cout << cnt << endl;
	}
	return 0;
}



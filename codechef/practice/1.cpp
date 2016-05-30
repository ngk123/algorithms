#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int T,ds,dt,d;	
	cin >> T;
	while(T--)
	{
		cin >> ds >> dt >> d;
		if(ds+dt<=d )
		{	
			cout << d-(ds+dt) << endl;
		}
		else if(ds+d<dt)
		{
			cout << dt-(ds+d) << endl;
		}
		
		else if(d+dt<ds)
		{
			cout << ds-(d+dt) << endl;
		}
		else 
		{
		cout << "0.000000\n";
			
		}			
	}	 
	return 0;
}


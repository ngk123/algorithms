#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{

	int m,n,i,j,t;
	srand(time(NULL));
	int T;
	cin >> T;
	cout << T << endl;
	for(t=0;t<T;t++)
	{
		//m=rand()%10+1;
		//n=rand()%10+1;
		//cout << m << " "<< n << endl;
		cout << 100 << " "<< 100 << endl;
		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
				//cout << rand()%10+1 << " " ;				
				cout << 1 << " " ;				
			}
			cout << endl;
		}
		//cout << rand()%m+1 <<" " << rand()%n+1 << " " <<rand()%20+1 << endl;
		cout << 100 <<" " << 100 << " " <<200 << endl;			
				
	}
	return 0;
}

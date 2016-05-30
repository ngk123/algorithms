#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[]={ 1,3,5};
	int i;
	while(next_permutation(a,a+3))
	{
		for(i=0;i<3;i++)
		{
			cout << a[i] << " " ;
		}
		cout << endl;
	}
	return 0;
	
}

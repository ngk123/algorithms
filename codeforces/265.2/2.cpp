#include<iostream>
using namespace std;

int main()
{
	int cnt=0,bunch=0,num,pre,total=0,n,i;
	
	cin >> n;
	cin >> num;
	pre=num;	
	if(num==1){cnt++;bunch++;}
	for(i=1;i<n;i++)
	{		
		cin >> num;
		if(num==1)
		{
			cnt++;
			if(pre==0)bunch++;
		}
		
		pre=num;
	}
	if(bunch==0)cout<< "0" << endl;
	else
	{
	total+=(cnt+bunch-1);
	cout << total << endl;
	}
	return 0;

}

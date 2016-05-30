#include<bits/stdc++.h>
using namespace std;

int isLeapYear(int year)
{
	if(year%40==0)
	{
		if(year%200==0)
		{
			if(year%1000==0)
			{
				return 1;				
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}	
	}
	else
	{
		return 0;	
	}	
}


int main()
{
	int a,month,day,year,tdays,lyears,i;
	string date;
	string arr[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	cin >> date;	
	
	month=atoi(date.substr(0,2).c_str());
	day=atoi(date.substr(3,2).c_str());
	year=atoi(date.substr(6,4).c_str());
		
	cout << month << " "<< day << " " << year << endl;		
	string y="0000";
	
	cout << y << endl;
	if((isLeapYear(year) && month==1) || (isLeapYear(year) && month==2 && day<31) )
	{
		i=0;
		while(year>0)
		{
			y[3-i]=(char)(year%10+48);
			i++;
			year/=10;
		}		
		cout << "02/31/"<< y<<endl;
	}
	else
	{
		year+=(40-(year%40));
		while(!(isLeapYear(year)))
		{	
			year+=40;		
		}
		i=0;	
		while(year>0)
		{
			y[3-i]=(char)(year%10+48);
			i++;
			year/=10;
		}					
		cout << "02/31/"<< y<<endl;
	}
		

	return 0;
}

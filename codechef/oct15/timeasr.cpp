#include<bits/stdc++.h>
using namespace std;

typedef struct angleTime{
float angle;
int min;
}at;

int main()
{
	int t,hr,mi,i,siz;
	float a,c;
	vector<at> aa[181];
	at temp;
	float hh,tempAngle;
	int mh,aInt;
	hh=0;
	mh=0;
	c=1.0/120;	
	for(i=0;i<720;i++)
	{
		tempAngle=(mh-hh);		
		if(tempAngle<0)tempAngle=-tempAngle;
		if(tempAngle>180)tempAngle=360-tempAngle;		
		aInt=(int)tempAngle;
		temp.angle=tempAngle;
		//cout << i  << " " << tempAngle << endl;
		
		temp.min=i;			
		aa[aInt].push_back(temp);			
		hh=hh+0.5;
		mh+=6;
		mh=mh%360;
	}
	
	cin >> t;
	while(t--)
	{
		cin >> a;
		aInt=(int)a;
		siz=aa[aInt].size();
		//cout << aInt << " " << siz << endl;
			for(i=0;i<siz;i++)
			{			
				//cout << abs(a-aa[aInt][i].angle) << endl; 
				//cout << c << endl;	
				if(abs(a-aa[aInt][i].angle)<c)
				{
				
					hr=(aa[aInt][i].min)/60;
					mi=((aa[aInt][i].min)%60);
					if(hr<10)
					{
						cout << 0;						
					}	 	
					cout << hr<<":";
					if(mi<10)
					{
						cout << 0;
					}
					cout << mi<<endl;					
				}		
			}
	}
	return 0;
}

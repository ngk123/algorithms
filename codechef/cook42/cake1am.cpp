#include<bits/stdc++.h>
using namespace std;


int aRect(int x1,int y1,int x2,int y2)
{
	return (x2-x1)*(y2-y1);
}


int main()
{
	int T,x1,x2,y1,y2,maxx1,minx2,maxy1,miny2, a1,a2,b1,b2,area,areaSub,len1,len2;
	cin>>T;
	while(T--)
	{	
		cin >> x1>>y1>>x2>>y2;
		cin >> a1>>b1>>a2>>b2;
		
		maxx1=max(x1,a1);
		minx2=min(x2,a2);
		maxy1=max(y1,b1);
		miny2=min(y2,b2);
		
		len1=minx2-maxx1;
		len2=miny2-maxy1;
		areaSub=0;
		if(len1<=0 || len2<=0)areaSub=0;
		else areaSub=len1*len2;
		area=aRect(x1,y1,x2,y2)+aRect(a1,b1,a2,b2)-areaSub;
		cout << area << endl;		
	}


	return 0;
}

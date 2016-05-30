#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef struct point {
int x;
int y;
}point ;
bool comp(point a,point b)
{
	return (a.x<b.x);
}

//vector<int> ycord[2000002];
pii tempP;
vector<pii> points;
point  p[2002];
int main()
{	
	int n,x3i,x4i,y3i,y4i,x1i,x2i,y1i,y2i,flag1,flag2,temp,ans=4,i,j;	
	float x1,x2,y1,y2,xc,xd,yc,yd,x3,x4,y3,y4;
	vector<pii>::iterator low;
	ios_base::sync_with_stdio(0);
	
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> p[i].x >> p[i].y;
		tempP.first=p[i].x;
		tempP.second=p[i].y;
		points.push_back(tempP);
		//ycord[p[i].x+1000000].push_back(p[i].y);		
		
	}
	
	if(n==0) { cout << "4\n"; return 0;}
	else if(n==1)  { cout << "3\n"; return 0;}
	else if(n==2)  { cout << "2\n"; return 0;}
	
	sort(p,p+n,comp);
	sort(points.begin(),points.end());
	/*for(i=0;i<n;i++)
	{
		sort(ycord[p[i].x+1000000].begin(),ycord[p[i].x+1000000].end());	
	}
	*/
	
	
	for(i=0;i<n-1;i++)
	{
		x1=p[i].x;
		y1=p[i].y;
		for(j=i+1;j<n;j++)
		{			
			x2=p[j].x;
			y2=p[j].y;
			xc = (x1 + x2)/2  ;  yc = (y1 + y2)/2  ;    // Center point
 			xd = (x1 - x2)/2  ;  yd = (y1 - y2)/2  ;    // Half-diagonal
			x3 = xc - yd  ;  y3 = yc + xd;    // Third corner
  			x4 = xc + yd  ;  y4 = yc - xd;    // Fourth corner
  			x1i=(int)x1; y1i=(int)y1;
  			x2i=(int)x2; y2i=(int)y2;
  			x3i=(int)x3; y3i=(int)y3;
  			x4i=(int)x4; y4i=(int)y4;
  			
  			flag1=0;
  			flag2=0;
  			
  			//cout << "______________________" << endl;
  			//cout << "x1 :" << x1 << " y1 :" << y1  << " x2 : "<<x2 << " y2 :" << y2 << endl ;
  			
  			//cout << "x3 :" << x3 << " y3 :" << y3  << " x4 : "<<x4 << " y4 :" << y4 << endl ;
  			if(x3-x3i>0 || y3-y3i>0)
  			{

  			}
  			else
  			{
  				tempP.first=x3i;
  				tempP.second=y3i;
  				low=lower_bound (points.begin(), points.end(), tempP); //  
  				//cout << "x3 i "<< x3i << "y3i "<<y3i << endl;  				
		  		if(low!=points.end() && *(low)==tempP)
		  		{
		  			//cout << "Yoooooo\n";
		  			flag1=1;
		  		}	
  			}
  			
  			
  			if(x4-x4i>0 || y4-y4i>0)
  			{

  			}
  			else
  			{
  				tempP.first=x4i;
  				tempP.second=y4i;
  				low=lower_bound (points.begin(), points.end(), tempP); //  
  				//cout << "x3 i "<< x3i << "y3i "<<y3i << endl;  				
		  		if(low!=points.end() && *(low)==tempP)
		  		{
		  			//cout << "Yoooooo\n";
		  			flag2=1;
		  		}	
  			}
  			//cout << "flag1 :" <<flag1 << " flag2 :"<<flag2 << endl;
  			
  			if(flag1==1 && flag2==1)
  			{
  				temp=0;
  			}
  			else if(flag1==1 || flag2==1)
  			{
  				temp=1;
  			}
  			else
  			{
  				temp=2;
  			}
  						
			if(ans>temp)ans=temp;		
		}
	}
	
	cout << ans << endl;
	return 0;
}

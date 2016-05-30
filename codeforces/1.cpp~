#include<iostream>

using namespace std;
int main()
{
	int x1,y1,x2,y2,flag,x3,x4,y3,y4,diff,diffx,diffy,temp;
	
	cin >> x1 >> y1 >> x2 >> y2;
	flag=0;
	if(x1==x2)
	{
		diff=y1-y2;
		if(diff<0)diff=-diff;
		x3=x1+diff;
		x4=x1+diff;
		y3=y1;
		y4=y2;
		flag=1;
	}

	else if(y1==y2)
	{
		diff=x1-x2;
		if(diff<0)diff=-diff;
		y3=y1+diff;
		y4=y1+diff;
		x3=x1;
		x4=x2;
		flag=1;
	
	}
	
	else 
	{
		diffx=x1-x2;
		diffy=y1-y2;
		
		temp=diffx*diffy;
		
		if(diffx<0) 
		{
		diffx=-diffx;
		
		
		}
		if(diffy<0)
		{
		diffy=-diffy;
		
		}
		if(diffx==diffy)
		{
			flag=1;
			if(temp<0)
			{
				x3=x1;
				x4=x2;
				y3=y1;
				y4=y2;		
			}
			else
			{
				x3=x2;
				x4=x1;
				y3=y1;
				y4=y2;
			}
		}	
		
			
	}
	if(flag==1)
	{
		cout<< x3 << " " << y3 << " "<< x4 << " " << y4 << endl;	
	}	
	else
	cout << -1 << endl;

	return 0;
}

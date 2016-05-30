#include<cstdio>
#include<cmath>


using namespace std;
int main()
{

int T,HH,MM;
float temp1,temp2,angle;
scanf("%d",&T);

while(T--)
{
	scanf("%d%d",&HH,&MM);
	if(HH>23 || HH<0 || MM >59 || MM<0)printf("Invalid Time\n");
	
	else
	{
	    if(HH>12)HH=HH-12;
		temp1=(30*HH+MM*0.5);
		temp2=(MM*6);
		if(temp1>temp2)
		angle=temp1-temp2;
		else
		angle=temp2-temp1;
		
		if(angle>180)angle=360-angle;
		printf("%0.1f\n",angle);
	}
}

}

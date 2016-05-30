#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,i,temp,n,sc,sp,sf,t,j,k;
	int gp[21],gc[21],gf[21];
	int p,c,f;	
	cin >> T;	
	for(k=1;k<=T;k++){
	
		memset(gp,0,sizeof(gp));
		memset(gc,0,sizeof(gc));
		memset(gf,0,sizeof(gf));
		cin >> p >> c >> f;
		cin >> n;
		cout << "Case #" << k << ": " ;		
		for(i=0;i<n;i++)
		{
			cin >> gp[i] >> gc[i] >> gf[i];
		}		
        temp=1<<n;        
        for(i=1;i<temp;i++)
        {
        	t=i;
        	j=0;
        	sp=0;sc=0;sf=0;
        	while(t>0)
        	{
        		if(t%2==1)
        		{
        			sp+=gp[j];
        			sc+=gc[j];
        			sf+=gf[j];
        		}	
        		t=t/2;
        		j++;
        	}     
        	   	
        	if(sp==p && sc==c && sf==f)
        	{
        		break;
        	}            	
        }		
		if(i<temp)
		cout << "yes\n";
		else
		cout << "no\n";		
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

	int pre[500];
	int curr[500];
	

int main()
{
string str;
int len,Q,m,l,i,j,k,n1,temp,ti;
cin >> str;
len=str.length();



lli ans;
cin >> Q;

for(i=0;i<Q;i++)
{
	memset(curr,0,sizeof(curr));	
	memset(pre,0,sizeof(pre));	


	ans=0;
	cin >> m >> l;
	int tii;
	//tii=((int)str[j])%m;
	//cout << "  sddsv "<<tii << endl;
	pre[((int)str[0]-'0')%m]+=1;
	
	ans=pre[l];
	for(j=1;j<len;j++)
	{	
		ti=((int)str[j]-'0')%m;
		//cout << "Heeyyy " << ti << endl;
		for(k=0;k<m;k++)
		{
			if(pre[k]>=1)
			{	
						
				temp=(k*10+ti)%m;
				curr[temp]+=pre[k];
			}
		}
		
		curr[ti]+=1;
		//cout << "dfvd " << ti << endl;
		ans+=curr[l];
		for(n1=0;n1<=m;n1++)
		{
			pre[n1]=curr[n1];
			curr[n1]=0;
		}
		
				
	}
	cout <<  ans << endl;
	
	
	
}



return 0;

}

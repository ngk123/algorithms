#include<bits/stdc++.h>
using namespace std;

void post(int in[],int n1,int n2,int pre[],int n3,int n4)
{

	if(n4<n3)return ;
	if(n3==n4)
	{
		cout << pre[n3] << " ";
		return ;
	}
	int *p=lower_bound(in+n1,in+n2+1,pre[n3]);
	int temp=p-in;
	int len=temp-n1;
	int n22=n1+len-1;
	int n44=n3+1+(n2-n1);
	post(in,n1,n22,pre,n3+1,n44);
	post(in,n22+2,n2,pre,n44+1,n4);
		
	cout << pre[n3] << " ";
	
	return ;
}



int main()
{
	int in[]={5,10,15,20,25,30,35};
	int pre[]={20,10,5,15,30,25,35};
	int n=7;
	post(in,0,n-1,pre,0,n-1);
	return 0; 

}
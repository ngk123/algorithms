#include<bits/stdc++.h>
using namespace std;
void findpost(int pre[],int in[],int n)
{
	int *ptr;
	int id;
	//cout << "pre starting :" << pre[0] << endl;
	ptr=find(in,in+n,pre[0]);
	id=ptr-in;	
	
	//cout << "found :" << *ptr << endl;
	if(id!=0)
	{	
		findpost(pre+1,in,id);	
	}
	if(id!=n-1)
	{
		findpost(pre+id+1,in+id+1,n-id-1);
	}		
	cout << pre[0] << " ";
	return ;		
}
int main()
{
	int i,n,a;	
	int in[100],pre[100];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		in[i]=a;
	}	
	for(i=0;i<n;i++)
	{
		cin >> a;
		pre[i]=a;
	}	
	findpost(pre,in,n);
	return 0;	
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,start,cnt,ans,k1,k2,i,npile;
	int arr[10002],pile[10002];
	ios_base::sync_with_stdio(0);
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		arr[0]=0;
		for(i=1;i<=n;i++)
		{
			cin >> arr[i];
		}		
		cnt=0;
		for(i=n;i>=1;i--)
		{
			if(cnt%2==0)
			{	
				pile[cnt/2]=arr[i]-arr[i-1]-1;
			}
			cnt++;
		}		
		npile=(cnt-1)/2;
		ans=pile[0];
		//cout << "Pile Size : " << pile[0] << endl;
		for(i=1;i<=npile;i++)
		{
			//		cout << "Pile Size : " << pile[i] << endl;
			ans=ans^pile[i];
		}
		//*/
		if(ans!=0)
		{
			cout << "Mary wins\n";
			if(n%2==0)
			{
				start=1;
			}
			else
			{
				start=0;
			}			
			//cout << "ans : " << ans << endl;
			    for(i=0;i<=npile;i++)
				{
					if(start!=0)
					{
						k1=(ans^pile[npile-i])-pile[npile-i];
						//cout << "k1 : " << k1 << endl;
						if(k1>0)
						{
							if(arr[start]-arr[start-1]>k1)
							{
								cout << "Move " << arr[start] << " to " << arr[start]-k1 << endl;
								cout << endl;
								break;							
							}
						}
					}
					start++;					
					k2=pile[npile-i]-(ans^pile[npile-i]);
					//cout<< "Hiiiiiiiii\n";
					//cout << "k2 : " << k2 << endl;
					if(k2>0)
					{
						if(arr[start]-arr[start-1]>k2)
						{
							cout << "Move " << arr[start] << " to " << arr[start]-k2 << endl;
							cout << endl;
							break;						
						}
					}							
					start++;			
				}				
		}
		else
		{
			cout << "Johnny wins\n\n";			
		}	
	}	
	return 0;
}

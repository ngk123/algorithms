#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
        int n,m;
        cin >> n >> m;
        int A[n];
        for(int i=0;i<n;i++)
        {
                cin >> A[i];
        }
        while(m--)
        {
                int a, b;
                cin >> a >> b;
                a--;
                b--;
                int temp = A[a];
                A[a] = A[b];
                A[b] = temp;
                long ans =0;
                for(int i=0;i<n;i++)
                {
                        for(int j=i+1;j<n;j++)
                        {
                                if(A[j]<A[i])
                                        ans++;
                        }
                }
                
                temp = A[a];
                A[a] = A[b];
                A[b] = temp;
                cout << ans << endl;
        }
}

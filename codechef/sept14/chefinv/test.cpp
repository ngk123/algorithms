#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
        int n,m;
        srand(time(NULL));
        n = 200;
        m = 20;
        cout<<n <<" "<< m << endl;
        for(int i=0;i<n;i++)
        {
                int v = rand()%1000000000;
                cout << v << " ";
        }
        cout << endl;
        for(int i=0;i<m;i++)
        {
                int a = rand()%n+1;
                int b = rand()%n+1;
                cout << a << " "<< b << endl;
        }
}
#include <iostream>

using namespace std;
int n1,n2,n3;
void generate(int A[],int pos,int len)
{
    if(pos==len)
    {
        for(int j=0;j<len;j++)
            cout<<A[j];
        cout<<"\n";
        return;
    }
    for(int i=0;i<=9;i++)
    {
        while((i==n1 || i==n2 || i==n3) || (pos>0 && A[pos-1]==i) || (pos>0 && A[0]!=4 && i==4))
            i++;
        if(i>9)
            continue;
        A[pos]=i;
        generate(A,pos+1,len);  
    }
}
int main()
{
    n1=2,n2=3,n3=5;
    int len=2;
    int A[len];
    generate(A,0,len);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
 
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                int n;
                cin>>n;
                //cout<<n;
                char str[1000010];
               
                int A[500];
                for(int i=0;i<500;i++)
                {
                        A[i] = i;
                }
               
               
                for(int i=0;i<n;i++)
                {
                        char a,b;
                        cin>>a>>b;
                        A[a]=b;
                        //cout<<a<<b;
                        //scanf("%c %c",&a,&b);
                }
                scanf("%s",str);
                int length = strlen(str);
               
                int check=0;
               
                for(int i=0;i<length;i++)
                {
                        str[i] = A[str[i]];
                        if(str[i]=='.')
                        check=1;
                }
                int begin = 0;
                int end = length-1;
               
               
                while(begin< length && str[begin]=='0')
                {
                        begin++;
                }
           
                while(check==1 && end >= 0 && str[end]=='0')
                {
                        end--;
                }
               
                if(begin == end && str[begin] =='.')
                {
                        for(int i=0;i<length ; i++)
                        {
                                cout<<str[i];
                        }
                        cout<<endl;
                        continue;
                }
               
                if(str[end]=='.')
                end--;
                for(int i=begin;i<=end;i++)
                {
                        cout<<str[i];
                }
                cout<<endl;
               
        }
        return 0;
}

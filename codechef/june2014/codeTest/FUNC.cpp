//
//  FUNC.cpp
//  Codechef
//
//  Created by Satya Prakash on 15/06/14.
//  Copyright (c) 2014 Satya Prakash. All rights reserved.
//

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#define MAX 1000000000000000000
#define mod 1000000007
typedef long long int lli;
//lli mat[61][1000010];

using namespace std;
int main()
{
    int temp[]={1000001 ,31623 ,3982 ,1001 ,373 ,178 ,101 ,64 ,44 ,32 ,25 ,20 ,16 ,14 ,12 ,11 ,9 ,8 ,8 ,7 ,7 ,6 ,6 ,5 ,5 ,5 ,5 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,4 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,2 ,2 ,2 };
    int T,A[10004],i,j,N,Q,s,cols,min;
    int cr=1000010,k;
    int arr[60],mul,l,u,mid;
    lli **matrix,ans,tempL,sumR,tempL2;
    long double x;
    matrix=(lli **)malloc(61*sizeof(lli *));
    matrix[0]=(lli *)malloc(cr*sizeof(lli));
    
    for(j=0;j<cr ;j++)
    {
        matrix[0][j]=(lli)j*j*j;
        
        if(matrix[0][j]<0 || matrix[0][j]>MAX ){arr[0]=j;matrix[0][j]=-1;break;}
    }
    
    for(i=1;i<60;i++)
    {
        cols=temp[i];
        cols=cols+1;
        matrix[i]=(lli *)malloc(cols*sizeof(lli));
        for(j=0;j<cr;j++)
        {
            matrix[i][j]=j*matrix[i-1][j];
            if(matrix[i][j]<0 || matrix[i][j]>MAX ){arr[i]=j;matrix[i][j]=-1;break;}
        }
    }
    
    scanf("%d",&T);
    
    
    while(T--)
    {
        scanf("%d%d",&N,&Q);
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        sumR=0;
        for(i=62;i<N;i++)
        {
            sumR=(sumR+A[i])%mod;
        }
        //printf("Q-%d\n",Q);
        
        for(k=0;k<Q;k++)
        {
            cin >> x;
            ans=0;
            tempL=(lli)x;
            tempL2=(lli)x;
            //printf("X-%lld\n",tempL);
            ans=tempL%mod;
            ans=(ans*A[0])%mod;
            //printf("%lld\n",ans);
            if(N>1)
            {
                tempL=((lli)sqrtl(x)*(lli)A[1])%mod;
                //printf("%lld\n",tempL);
                ans=(tempL+ans)%mod;
            }
            if(N>=62)min=62;
            else min=N;
            //printf("min-%d\n",min);
            
            for(i=2;i<min;i++)
            {
                //for(j=0;;j++)
                //{
                
                //cout << tempL2 << endl;
                mul=-1;
                l=0;u=arr[i-2]-1;
                //cout << u <<endl;
                
                if(l==u)mul=l;
                else if(u==1)mul=1;
                else
                {
                    while(l<=u)
                    {
                        if(l==(u-1)){if(matrix[i-2][u]<=tempL2)mul=u;else mul=l; break;}
                        if(l==u){mul=l;break;}
                        mid=(l+u)/2;
                        if(tempL2==matrix[i-2][mid]){
                            mul=mid;
                            break;
                        }
                        else if(tempL2<matrix[i-2][mid]){
                            u=mid-1;
                        }
                        else
                            l=mid;
                        
                        //printf("l=%d __u=%d",l,u);
                    }
                    //printf("l=%d __u=%d",l,u);
                }
                
                
                //if(l>u)mul=arr[i-2]-1;
                // printf("mul:%d\n",mul);
                
                /*if(matrix[i-2][j]>x || matrix[i-2][j]==-1)
                 {
                 tempL=(A[i]*(j-1))%mod;
                 ans=(ans+tempL)%mod;
                 break;
                 }*/
                //cout << mul << endl;
                
                tempL=(A[i]*mul)%mod;
                ans=(ans+tempL)%mod;
                //}
            }
            
            ans=(ans+sumR)%mod;
            if(ans<0)ans=ans+mod;
            printf("%lld ",ans);
        }
        
        printf("\n");
    }
    return 0;
}
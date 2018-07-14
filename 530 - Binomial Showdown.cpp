/// TL
#include<stdio.h>
#include<iostream>
using namespace std;
long long int fact(int n)
{
    long long res=1;
    for(int i=n;i>=1;i--)
    {
        res*= i;
    }
    return res;
}
long long int C(int n,int k)
{
    long long res=1;
    for(int i=n;i>=(n-k+1);i--)
    {
        res*= i;
    }
    return res/fact(k);
}
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k))
    {
        if(n==0 && k==0)
        {
            break;
        }
        long long int output = C(n,k);
        cout<<output<<endl;

    }
}

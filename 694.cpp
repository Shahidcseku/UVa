///694 - The Collatz Sequence
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define rep(i, n) for(int i=1;i<=n;i++)
#define repb(n, i) for(int i=n-1;i>=1;i--)

using namespace std;
int main()
{
    long long int a,lim,step,t=0;
    while(sf("%lld%lld",&a,&lim)==2)
    {
        long long int reservedA = a;
        if(a==-1 && lim==-1)
        {
            break;
        }
        t++;
        step = 1;
        while(1)
        {
            if(a==1)
            {
                break;
            }
            if(a%2==0)
            {
                a = a/2;
            }
            else
            {
                a = 3*a+1;
            }
            if(a>lim)
            {
                break;
            }
            step++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,reservedA,lim,step);

    }

}


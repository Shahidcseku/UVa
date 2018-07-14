///Combinations
///369

#include<stdio.h>
long long fact(long long a);

int main()
{
    long long m,n,i,j,fn,fm,fnm,com=0;
    while(1)
    {
        scanf("%lld%lld",&n,&m);
        if(n==0 && m==0)
        {
            break;
        }
        else
        {
           fn=fact(n);
           fm=fact(m);
           fnm=fact(n-m);
           com=fn/(fm*fnm);

           printf(" %lld things taken %lld at a time is %lld exactly.\n",n,m,com);

        }
    }
}
long long fact(long long a)
{
    long long i,res=1;
    for(i=1;i<=a;i++)
    {
        res=res*i;

    }
    return res;
}

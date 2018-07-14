/// H(n)
///11526


#include<stdio.h>

int main()
{
    long long int n,res;
    int t,j;
    scanf("%d",&t);
    for (j=1;j<=t;j++)
    {

        res = 0;

        scanf("%lld",&n);

        for( int i = 1; i <= n; i=i+1)
            {
                res = (res + n/i);
            }
        printf("%lld\n",res);
    }

}


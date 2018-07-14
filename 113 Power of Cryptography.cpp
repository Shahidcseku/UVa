#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,p;
    while(scanf("%lld%lld",&n,&p)==2)
    {
        long long int x = (long long int)pow(p, 1.0 / n);

        if (pow(x + 1, n) <= p)
        {
            x= x + 1;
        }
        printf("%lld\n",x);
    }
}

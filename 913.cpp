/// JOANA AND THE ODD NUMBERS
///913
#include<stdio.h>
int main()
{
   long long n,sum;
   while (scanf("%lld",&n)==1)
   {
       sum=((n*(n+2))/2)*3-6;
       printf("%lld\n",sum);
   }
}

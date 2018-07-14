#include<stdio.h>
int main()

{
    long long n,fact,i;

    while(scanf("%lld",&n)==1)
    {
          fact=1;

          if(n<0 && n%2==0)
         {
             printf("Underflow!\n");
         }

         else if(n<0 && n%2!=0)
         {
            printf("Overflow!\n");
         }

         else if(n<8)
         {
             printf("Underflow!\n");
         }

        else if(n>13)
        {
            printf("Overflow!\n");
        }
        else
        {
                for(i=n;i>0;i--)
            {
                fact=fact*i;
            }
            printf("%lld\n",fact);
        }
    }
}

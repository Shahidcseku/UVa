// Leap year and festival year
//10070
#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
    {
        if(n%4==0 && (n%100!=0 || n%400==0))
        {
            printf("This is a leap year.\n");
        }
        if(n%15==0)
        {
            printf("This is a hulukulu festival year.\n");
        }
        if (n%55==0 && (n%4==0 && (n%100!=0 || n%400==0)))
        {
            printf("This is a bulukulu festival year.\n");
        }
        if(n%4!=0 && n%15!=0 && n%55!=0)
        {
            printf("This is an ordinary year.\n");
        }
    }


}

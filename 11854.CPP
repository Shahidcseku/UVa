///Egypt
///11854

#include<stdio.h>

int main()
{
    long a,b,c,r1,r2,r3;

    while(1)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(a!=0 || b!=0 || c!=0)

        {
            r1=a*a;
            r2=b*b;
            r3=c*c;

            if(r1==r2+r3)
            {
                printf("right\n");
            }
            if(r2==r1+r3)
            {
                printf("right\n");
            }
            if(r3==r2+r1)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
}

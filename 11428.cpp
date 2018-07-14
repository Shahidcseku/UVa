/// 11428
/// Cubes

#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,y,s1,s2;
    int i,j,c;

    while(scanf("%lld",&n)==1)
    {

        s1=0;
        s2=0;

        if(n==0)
        {
            break;
        }
        else
        {
            c=0;
            for (i=60;i>0;i--)
            {
            for(j=1;j<=i;j++)
            {
               x=pow(i,3);
               y=pow(j,3);
               if(n==(x-y))
               {
                   c=1;
                   s1=i;
                   s2=j;
                   break;
               }


            }
        }
        if(c==0)
        {
            printf("No solution\n");
        }
        else
        {
            printf("%lld %lld\n",s1,s2);
        }
        }
    }
}

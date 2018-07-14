/// HINT: Only the squre numbers has n+1 factors :-)
#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,sq;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        sq = sqrt(n);

        if(n==sq*sq)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

}

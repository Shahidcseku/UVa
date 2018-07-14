/// Little master
///12704

#include<stdio.h>
#include<math.h>
int main()
{
        int t,x,y,r;
        float sortest,longest,d;
        scanf("%d",&t);
        for(int i=1;i<=t;i++)
        {
                scanf("%d%d%d",&x,&y,&r);
                d=sqrt(x*x+y*y);
                longest=d+r;
                sortest=r-d;
                printf("%.2f %.2f\n",sortest,longest);
        }

}

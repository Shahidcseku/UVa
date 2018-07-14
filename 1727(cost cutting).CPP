#include<stdio.h>
int main()
{
        int t,a,i,b,c,mid;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
                scanf("%d%d%d",&a,&b,&c);
                if((a>b && a<c) || (a<b && a>c))
                {
                        mid=a;
                }
                else if((b>a && b<c) || (b<a && b>c))
                {
                        mid=b;
                }
                else
                {
                        mid=c;
                }
                printf("Case %d: %d\n",i,mid);
        }


}



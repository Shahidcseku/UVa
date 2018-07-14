#include<stdio.h>
int main()
{
        int n,k,p,rt,t;
        scanf("%d",&t);
        for(int i=1;i<=t;i++)
        {
                scanf("%d%d%d",&n,&k,&p);
                rt=k+p;

                while(rt>n)
                {
                        rt=rt-n;
                }
                printf("Case %d: %d\n",i,rt);
        }
}

#include<stdio.h>
int main()
{
        int n,g,l;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                scanf("%d%d",&g,&l);
                if(l%g==0)
                {
                        printf("%d %d\n",g,l);
                }
                else
                {
                        printf("-1\n");
                }
        }
}

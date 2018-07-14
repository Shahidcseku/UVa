///BRICK GAME
///11875

#include<stdio.h>
int main()
{
    int i,j,k,t,n,a[100];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);

            for(j=0;j<n;j++)
            {
                scanf("%d",&a[j]);
            }
            printf("Case %d: %d\n",i,a[n/2]);
        }

    }

}

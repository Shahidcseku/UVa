///JUMPING MARIO
///11764

#include<stdio.h>
int main()
{
    int t,n,high,low,i,j,x,w;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        high=0,low=0;
        scanf("%d%d",&n,&x);
        for(j=1;j<n;j++)
        {
            scanf("%d",&w);
            if(w>x)
            {
                high++;
                x=w;
            }
            else if(w<x)
            {
                low++;
                x=w;
            }
        }
        printf("Case %d: %d %d\n",i,high,low);
    }


}

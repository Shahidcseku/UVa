#include<stdio.h>
int main()
{
        int x,i,n,j,y,ans;
        scanf("%d",&j);
        for(i=1;i<=j;i++)
        {
                scanf("%d",&n);
                x=((((((n*567)/9)+7492)*235)/47)-498);
                y=x/10;
                ans=y%10;
                if(ans<0)
                {
                        ans=ans/(-1);
                }
                printf("%d\n",ans);
        }
}

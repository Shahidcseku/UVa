#include<stdio.h>
int main()
{
        int i,j,k,n,m;

        scanf("%d",&i);
        for(j=1;j<=i;j++)
        {
                scanf("%d %d",&n,&m);
               int s=0;


                         if(n%2==0)
                         {
                                 n=n+1;
                        }
                        else
                        {
                                n=n;
                        }

                for(k=n;k<=m;k+=2)
                {
                        s=s+k;
                }
                printf("Case %d: %d\n",j,s);
        }
}

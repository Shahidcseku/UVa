#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,k;
    int cs = 0;
    int m[10001],qq[10001];
    while(scanf("%d%d",&n,&q)==2)
    {

        if(n==0 && q==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m[i]);
        }
        for(int j=0;j<q;j++)
        {
            scanf("%d",&qq[j]);
        }
        sort(m,m+n);

        printf("CASE# %d:\n",++cs);

        for(int i=0;i<q;i++)
        {
            k=0;
            for(int j=0;j<n;j++)
            {
                if(qq[i]==m[j] && k!=1)
                {
                   printf("%d found at %d\n",qq[i],j+1);
                   k=1;
                }
            }
            if(k==0)printf("%d not found\n",qq[i]);
        }

    }
}

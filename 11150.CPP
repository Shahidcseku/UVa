///COLA
///11150

#include<stdio.h>
int main()
{
    int i,n,res;
    while(scanf("%d",&n)==1)
    {
        res=n;
        while(n>=3)
        {
            res=res+n/3;
            n=n/3+n%3;
        }
        if(n==2)
        {
            res++;
        }
        printf("%d\n",res);
    }
}

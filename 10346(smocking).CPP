#include<stdio.h>
int main()
{
        int n,k,x,y,total;
        while(scanf("%d%d",&n,&k)==2 && k>1)

        {
                        total=n;

                while(n>=k)
        {

                        x=n%k;
                        y=n/k;
                        total=total+y;
                        n=x+y;


        }
         printf("%d\n",total);
        }

}

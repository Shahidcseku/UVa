//shahid
#include<stdio.h>
int main()
{
        int n,x,y,total,i;
        for(i=1;i<=10;i++)
        {
                scanf("%d",&n);
                if(n==0)
                {
                        break;
                }
                total=0;
                while(n>=3)
                {
                        x=n%3;
                        y=n/3;
                        total=total+y;
                        n=x+y;
                        if(n==2)
                        {
                                total=total+1;
                        }
                }
                printf("%d\n",total);
        }
}

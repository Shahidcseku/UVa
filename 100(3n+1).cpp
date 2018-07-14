
//

#include<stdio.h>
int main()

{
    int num,x,y,small,large,a,b=0,m;
    while(scanf("%d %d",&x,&y)==2)
    {   m=0;
        if(x>y)
            {
                large=x;small=y;
            }
            else
            {
                large=y;small=x;
            }
            for(a=small;a<=large;a++)
            {
                num=a;b=0;
                while(num!=1)
                {
                    if(num%2==1)
                    {
                        num=3*num+1;
                    }
                    else
                    {
                        num=num/2;
                    }
                    b++;
                    if(b>m)
                    {
                        m=b;
                    }
                }
            }
            printf("%d %d %d\n",x,y,m+1);

    }
    return 0;
}

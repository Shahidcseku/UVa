///SODA SURPLER
///11689

#include<stdio.h>
int main()
{
    int i,j,t,e,f,c,total,bottle,final;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        final=0;
        scanf("%d%d%d",&e,&f,&c);
        total=e+f;
        while(total>=c)
        {

            bottle=total/c;
            final=final+bottle;
            total=bottle+total%c;

        }
        printf("%d\n",final);
    }
}

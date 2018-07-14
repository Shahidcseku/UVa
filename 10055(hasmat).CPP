#include<stdio.h>
int main()
{
        int i,j;
        while(scanf("%d%d",&i,&j)==2)
                if(i>j)
        {
                printf("%d\n",i-j);
        }
        else
        {
                printf("%d\n",j-i);

        }
}

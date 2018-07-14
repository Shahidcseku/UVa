/// ZAPPING
///12468

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,press;
    while(scanf("%d%d",&i,&j)==2 && i>=0 && j>=0)
    {

        press=abs(i-j);
        if(press>50)
        {
            press=100-press;
        }

       printf("%d\n",press);
    }
}

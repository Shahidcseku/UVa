//10038
// jolly  jumpers
#include<stdio.h>
#include<stdlib.h>
int main()

{
    int i,t,n,diff,init,jolly=1;
    while(1)
    {
    scanf("%d",&t);

    scanf("%d",&init);
    for (i=t;i>1;i--)
    {
        scanf("%d",&n);

        diff=abs(n-init);
        init=n;
        if(diff!=i-1)
        {
            jolly=0;
        }

    }
    if(jolly==0)
    {
        printf("Not jolly\n");
    }
    else
    {
        printf("Jolly\n");
    }
}
}

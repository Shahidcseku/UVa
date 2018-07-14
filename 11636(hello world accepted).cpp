#include<stdio.h>
int main()
{
    int i,n,sum,count;
    for (i=1; ;i++)
    {
        scanf("%d",&n);
        if (n<0)
        {
            break;
        }
        else
        {
            sum=1;
            count=0;
           while(sum<n)
           {
                sum=sum*2;
                count++;
           }
        printf("Case %d: %d\n",i,count);

        }
    }

}

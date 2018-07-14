#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name1[1001],name2[1001];
    while(gets(name1) && gets(name2))
    {
        int sum1 =0,sum2=0,temp1,temp2;
        float love=0;
        int x = strlen(name1);
        int y = strlen(name2);
        for(int i=0;i<x;i++)
        {
            if((name1[i]>='A' && name1[i]<='Z'))
            {
                sum1 += name1[i] - 64;
            }
            else if(name1[i]>='a' && name1[i]<='z')
            {
                sum1 += name1[i] - 96;
            }

        }
        for(int i=0;i<y;i++)
        {
            if((name2[i]>='A' && name2[i]<='Z'))
            {
                sum2 += name2[i] - 64;
            }
            else if(name2[i]>='a' && name2[i]<='z')
            {
                sum2 += name2[i] - 96;
            }
        }

        temp1 = 0;
        temp2 = 0;
        while(sum1!=0)
        {
            temp1 += sum1%10;
            sum1 = sum1/10;
        }
        if(temp1>9)
        {
            sum1 = temp1;
            temp1 =0;
            while(sum1!=0)
            {
                temp1+= sum1%10;
                sum1 = sum1/10;
            }
        }
       while(sum2!=0)
        {
            temp2 += sum2%10;
            sum2 = sum2/10;
        }

        if(temp2>9)
        {
            sum2 = temp2;
            temp2 =0;
            while(sum2!=0)
            {

                temp2+= sum2%10;
                sum2 = sum2/10;
            }
        }

        if(temp2>temp1)
        {
            love =(float)temp1*100/(float)temp2;
        }
        else
        {
            love =(float)temp2*100/(float)temp1;
        }

        printf("%.2lf %%\n",love);

    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int n,i,sum,num,temp;
    char ints[100];
    while(gets(ints))
    {
        sum=0;
        n=strlen(ints);
        for(i=0;i<n;i++)
        {
        num=ints[i]-'0';
        temp=num*(pow(2,n-i)-1);
        sum=sum+temp;
        }
        if(sum==0)
        {
            break;
        }
        printf("%ld\n",sum);
    }
}

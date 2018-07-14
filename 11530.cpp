//11530
// SMS typing

#include<stdio.h>
#include<string.h>
int main()

{
    int i,j,n,t,sum;
    char a[107];

    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {

       gets(a);
       sum=0;
       n=strlen(a);
       if(n==0)
       {
           continue;
       }

       for (j=0;j<n;j++)
       {
           if(a[j]=='a'|| a[j]=='d' || a[j]=='g' ||a[j]=='j' ||a[j]=='m' ||a[j]=='p' ||a[j]=='t' ||a[j]=='w'|| a[j]==' ')
           {
               sum=sum+1;
           }
           else if(a[j]=='b' ||a[j]=='e' ||a[j]=='h' ||a[j]=='k' ||a[j]=='n' ||a[j]=='q' ||a[j]=='u' ||a[j]=='x')
           {
               sum=sum+2;
           }
           else if(a[j]=='c' ||a[j]=='f' ||a[j]=='i' ||a[j]=='l' ||a[j]=='o' ||a[j]=='r' ||a[j]=='v' ||a[j]=='y')
           {
               sum=sum+3;
           }
           else if(a[j]=='s' ||a[j]=='z')
           {
               sum=sum+4;
           }

       }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}

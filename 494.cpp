///494 - Kindergarten Counting Game
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    char str[2000];
   while(gets(str))
   {
       char arr[2000];
       int l = strlen(str);
       int sum=0,s=0;

       rep(i, l)
       {
           if((str[i]>64 && str[i]<91) || (str[i]>96 && str[i]<123))
           {
               if(s==0)
               {
                   s=1;
               }
           }
           else if(str[i==32] && s==1)
           {
               sum++;
               s=0;
           }
       }
       cout<<sum<<endl;
   }
}

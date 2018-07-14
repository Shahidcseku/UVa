#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    char str[10],cmd[10];
    int sum=0,amount;
    for(int i=0;i<t;i++)
    {

        scanf("%s",&str);
        getchar();
        if(str[0]=='d')
        {
            scanf("%d",&amount);
            sum+=amount;
           // cout<<amount<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
}

#include<iostream>
using namespace std;
/*#include<string.h>
using namespace std;
int coin[5] = {50,25,10,5,1};
int dp[5][7490];
int make;
int CoinChange(int amount,int n)
{
    if(n>=5)
    {
        if(amount==make)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[n][amount]!=-1)
    {
        return dp[n][amount];
    }
    int ret1=0,ret2=0;
    if(amount+coin[n]<=make)
    {
        ret1 = CoinChange(amount+coin[n],n);  /// Take coin[n]
    }
    ret2 = CoinChange(amount,n+1);  /// Not take coin[n]

    dp[n][amount] = ret1+ret2;
    return dp[n][amount];
}
int main()
{

    while(cin>>make)
    {
        memset(dp,-1,sizeof(dp));
        cout<<CoinChange(0,0)<<endl;
    }
}*/

#include <stdio.h>
#define N 7490

int a[N];
int coins[4] = {5, 10, 25, 50};

int main()
{
    int i, j;

    for(i=0; i<N; i++)
    {
        a[i] = 1;
    }

    for(i=0; i<4; i++)
    {
        for(j=coins[i]; j<N; j++)
        {
            a[j] += a[ j - coins[i] ];
        }
    }

    int n;
    while(scanf("%d", &n) == 1)
    {
        printf("%d\n", a[n]);
    }
}

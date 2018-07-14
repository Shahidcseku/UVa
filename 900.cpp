/// 900 - Brick Wall Patterns is a fib... solution by first  6 cases :-)
/// This solution failed to calcualted for 2 cases: 49,50 :-(
#include<bits/stdc++.h>
using namespace std;
unsigned long long int dp[50];
unsigned long long int findFib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]= findFib(n-1)+findFib(n-2);
    return dp[n];
}
void init()
{
    for(int i=0;i<50;i++)
    {
        dp[i] = -1;
    }
}
int main()
{
    int n;
    init();
    unsigned long long int fib;
    while(scanf("%d",&n) && n)
    {
        fib = findFib(n+1);
        cout<<fib<<endl;
    }
}


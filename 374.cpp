#include<bits/stdc++.h>
#define LL unsigned long long
using namespace std;
LL modular_arithmatic(LL b,LL p,int m)
{
    if(p==0)
    {
        return 1;
    }

    if(p%2==0)
    {
        int x=modular_arithmatic(b,p/2,m);
        return (x*x)%m;
    }
    else
    {
        return (b%m)*modular_arithmatic(b,p-1,m)%m;
    }
}
int main()
{
    LL b,p;
    int m;
    while(cin>>b>>p>>m)
    {
        LL r = modular_arithmatic(b,p,m);
        cout<<r<<endl;
    }
}

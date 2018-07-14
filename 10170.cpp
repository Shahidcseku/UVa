#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL s,d,init;
    while(cin>>s>>d)
    {
        init = s;
        while(s<d)
        {
            init++;
            s = s+init;
        }
        cout<<init<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int m,n,x,y;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        n -= 2;
        m -= 2;

        if(n%3)
        {
            x = n/3 + 1;
        }
        else
        {
            x = n/3;
        }

        if(m%3)
        {
            y = m/3 + 1;
        }
        else
        {
            y = m/3;
        }

        cout<<y*x<<endl;
    }
}

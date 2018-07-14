///490 - Rotating Sentences
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define rep(i, n) for(int i=1;i<=n;i++)
#define repb(n, i) for(int i=n-1;i>=1;i--)
using namespace std;
int main()
{
    int test;
    while( sf("%d",&test)==1)
    {
        rep(i,test)
        {
            int a,f;
            sf("%d%d",&a,&f);

            rep(j,f)
            {
                rep(k,a)
                {
                    rep(l,k)
                    {
                        cout<<k;
                    }
                    cout<<endl;
                }
                repb(a,k)
                {
                    rep(l,k)
                    {
                        cout<<k;
                    }
                    cout<<endl;
                }
                if(i!=test-1 || j!=f-1)
                {
                    cout<<endl;
                }
            }
        }
    }
}

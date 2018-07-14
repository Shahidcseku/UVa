///10300 - Ecological Premium
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int test;
    sf("%d",&test);

    rep(i, test)
    {
        int n;
        sf("%d",&n);

        float sum =0;
        rep(j,n)
        {
            int area,anim,frnd;
            sf("%d%d%d",&area,&anim,&frnd);
            float r,a,f;
            r = area;
            a = anim;
            f = frnd;

            float temp = (r/a)*f*a;
            //cout<<temp<<"--temp"<<endl;
            sum+=temp;

        }
        cout<<sum<<endl;
    }


}

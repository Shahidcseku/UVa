#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL l,h,res,seq,temp,maxx;
    while(cin>>l>>h)
    {
        if(l==0 && h==0)
        {
            break;
        }
        if(h<l)
        {
            swap(h,l);
        }
        res=0;
        maxx =0;
        for(int i=l;i<=h;i++)
        {
            temp =i;
            seq =0;
            do
            {
                if(temp%2==0)
                {
                    temp = temp/2;
                }
                else
                {
                    temp = 3*temp+ 1;
                }
                seq++;
            }
            while(temp!=1);
            if(seq>res)
            {
                res = seq;
                maxx = i;
            }

        }

        cout<<"Between "<<l<<" and "<<h<<", "<<maxx<<" generates the longest sequence of "<<res<<" values."<<endl;

    }
}


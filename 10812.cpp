#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s,d;
        cin>>s>>d;

        int flag=0;
        for(int j=0;j<=s;j++)
        {
            for(int k=j+d;k<=s+d;k++)
            {
                if(abs(j-k)==d && j+k==s)
                {
                    if(j>k)
                    {
                        cout<<j<<" "<<k<<endl;
                    }
                    else
                    {
                        cout<<k<<" "<<j<<endl;
                    }
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            cout<<"impossible"<<endl;
        }
    }
}

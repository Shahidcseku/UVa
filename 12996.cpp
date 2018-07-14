#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int N[100],L[100];
        cin>>n>>l;

        for(int j=0;j<n;j++)
        {
            cin>>N[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>L[j];
        }

        int flag =0,sum=0;
        for(int j=0;j<n;j++)
        {
            if(N[j]<=L[j])
            {
                sum+= N[j];
            }
            else
            {
                flag =1;
                break;
            }

            if(sum>l)
            {
                flag=1;
                break;
            }

        }

        if(flag==1)
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
        else
        {
             cout<<"Case "<<i<<": Yes"<<endl;
        }

    }
}

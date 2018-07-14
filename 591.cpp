#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int k=0;
    while(cin>>t)
    {
        k++;
        if(t==0)
        {
            break;
        }
        int h[100];
        int sum = 0;
        for(int i=0;i<t;i++)
        {
            cin>>h[i];
            sum+= h[i];
        }
        int de = sum/t;
        int ans=0;
        for(int i=0;i<t;i++)
        {
            if(h[i]>de)
            {
                ans+= h[i] - de;
            }
        }
        cout<<"Set #"<<k<<endl;
        cout<<"The minimum number of moves is "<<ans<<".\n"<<endl;



    }
}

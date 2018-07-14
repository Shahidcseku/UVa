#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long sum,n,nn,len;

    cin>>t;
    for(int i=0;i<t;i++)
    {

        cin>>n;
        nn = n;
        len =0;
        while(nn!=0)
        {
            len++;
            nn = nn/10;
        }

        sum = 0;
        nn = n;
        while (nn)
        {
            int r = nn%10;
            sum += pow(r, len);
            //cout<<sum<<"--";
            nn = nn/10;
        }

        if(sum==n)
        {
            cout<<"Armstrong"<<endl;
        }
        else
        {
            cout<<"Not Armstrong"<<endl;
        }



    }

}

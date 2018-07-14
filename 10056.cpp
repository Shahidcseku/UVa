#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    float p;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n>>p>>i;
        float res = p*pow(1-p,i-1)/(1-pow(1-p,n));

        if(p==0)
        {
            printf("0.0000\n");
        }
        else
        {
            printf("%.4f\n",res);
        }

    }
}


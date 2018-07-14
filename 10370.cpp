#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int S[1001];
        double sum = 0,avg;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>S[j];
            sum+=S[j];
        }
        avg = sum/n;

        int above =0;
        for(int j=0;j<n;j++)
        {
            if(S[j]>avg)
            {
                above++;
            }
        }
        printf("%.3lf%%\n", (double) above / (double) n*100.0);
    }
}

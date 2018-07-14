#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    int c;
    if(a%b==0)
    {
        return b;
    }
    return GCD(b,a%b);
}

int main()
{
    int N,G;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        G=0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;

    }


}

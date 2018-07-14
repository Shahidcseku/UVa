/// UVa 729 Hamming distance

#include <bits/stdc++.h>
using namespace std;
char s[50];
int N, H;
void dfs(int i, int H)
{
    if(H>i || H<0)
    {
        return;
    }
    if(i==0) /// base case
    {
        cout<<s<<endl;
        return;
    }
    s[N-i] = '0';
    //cout<<endl<<s[N-i]<<" at"<<i<<endl;
    dfs(i-1, H);
    s[N-i] = '1';
    //cout<<endl<<s[N-i]<<" at"<<i<<endl;
    dfs(i-1, H-1);
}
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(s,'\0',sizeof(s));
        cin>>N>>H;
        dfs(N,H);
        if(i<t)
        {
            cout<<endl;
        }

    }

}

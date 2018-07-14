#include<bits/stdc++.h>
using namespace std;
int G[10000][10000];
int S[10000];
int counter;
int dfs(int u,int n)
{
    counter++;
    S[u] = 1;
    for(int v=0;v<=n;v++)
    {
        if(S[v]==0 && G[u][v]==1)
        {
            dfs(v,n);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        counter=0;
        memset(G,0,sizeof(G));
        memset(S,0,sizeof(S));

        int n,m,l,sum=0;
        cin>>n>>m>>l;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            G[x][y] = 1;
        }
        for(int i=0;i<l;i++)
        {
            int z;
            cin>>z;
            if(S[z]==0)
            {
                dfs(z,n);
            }
            //cout<<"Touch "<<z<<" and Sum "<<sum<<endl;
        }
        cout<<counter<<endl;
    }
}

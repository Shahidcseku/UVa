#include <bits/stdc++.h>
using namespace std;

int k, n, m, sqr;
void dfs(int x, int y, int k)
{
    if(k==0)
    {
        return;
    }

    /// Check if the point is inside the box
    if(x-k <= n && x+k >= n && y-k <= m && y+k >= m)
    {
        sqr++;
    }
    dfs(x+k, y+k, k/2);
    dfs(x+k, y-k, k/2);
    dfs(x-k, y+k, k/2);
    dfs(x-k, y-k, k/2);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>k>>n>>m)
    {
        if(k==0 && n==0 && m==0)
        {
            break;
        }
        sqr = 0;
        dfs(1024, 1024, k);
        printf("%3d\n", sqr);
    }
    return 0;
}


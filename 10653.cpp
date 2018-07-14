/// UVa 10653 - Bombs! NO they are Mines!!
#include<bits/stdc++.h>
using namespace std;
int G[1005][1005];
queue <int> q;
int r,c;
bool valid(int x,int y)
{
    if ( x>=0 && x<=r && y>=0 && y<=c)
    {
        return true;
    }
    return false;
}
void AddToQ(int r, int c, int val)
{
    G[r][c] = val+1;
    q.push(r);
    q.push(c);
}
void bfs(int sx,int sy, int dx, int dy)
{
    int x,y;
    q.push(sx);
    q.push(sy);

    while(!q.empty())
    {
        x = q.front();
        q.pop();
        y = q.front();
        q.pop();
        if (valid(x-1, y) && G[x-1][y]<0)
        {
            AddToQ(x-1, y, G[x][y]);
        }
        if ( valid (x,y + 1) && G [x][y+1]<0)
        {
            AddToQ(x,y+1, G[x][y]);
        }
        if ( valid (x+1, y) && G[x+1][y]<0)
        {
            AddToQ(x+1, y, G[x][y]);
        }
        if ( valid (x, y-1) && G[x][y-1]<0)
        {
            AddToQ(x, y-1, G[x][y]);
        }
    }
     printf("%d\n", G[dx][dy]+1);

}
int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int row,nRow,nCol,bomb,s1,s2,d1,d2;
    while(cin>>r>>c)
    {
        memset(G,-1,sizeof(G));
        if(r==0 && c==0)
        {
            break;
        }
        cin>>nRow;
        for(int i=0; i<nRow; i++)
        {
            cin>>row>>nCol;
            for(int j=0; j<nCol; j++)
            {
                cin>>bomb;
                G[row][bomb]=1;
            }
        }
        cin>>s1>>s2;
        cin>>d1>>d2;
        bfs(s1,s2,d1,d2);
    }
}

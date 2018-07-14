#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >graph;
vector<int> visited;
int visitedNode=0;

void dfs(int u)
{
    for(int v=0;v<graph[u].size();v++)
    {
        int i=graph[u][v];
        if(visited[i]==1)
        {
            visited[i]=2;
            visitedNode++;
            dfs(i);
        }
    }

}
int main()
{
    int nodes,query,u,v,vertex;
    while(cin>>nodes && nodes!=0)
    {
        graph = vector<vector<int> >(nodes+1);
        while(cin>>u && u!=0)
        {
            while(cin>>v && v!=0)
            {
                graph[u].push_back(v);
            }
        }

        cin>>query;
        for(int i=0;i<query;i++)
        {
            cin>>vertex;
            visited = vector<int>(nodes+1,1);
            visitedNode = 0;
            dfs(vertex);

            cout<<nodes-visitedNode;
            for(int j=1;j<=nodes;j++)
            {
                if(visited[j]==1)
                {
                    cout<<" "<<j;
                }
            }
            cout<<endl;
        }
    }
}


#include <bits/stdc++.h>
int V;
using namespace std;
int G[200][200];

bool isBipartite(int src)
{
	int color[V];
	for (int i=0; i<V; i++)
    {
        color[i] = -1;
    }

	color[src] = 1;

	queue <int> q;
	q.push(src);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		///Self-loop
		if (G[u][u] == 1)
        {
            return false;
        }
		for (int v=0; v<V; v++)
		{
			if (G[u][v] && color[v] == -1)
			{
				color[v] = 1 - color[u]; /// Alternate color
				q.push(v);
			}
			else if (G[u][v] && color[v] == color[u])
            {
                return false;
            }
		}
	}

	return true;
}

int main()
{
    int e;
    while(cin>>V && V!=0)
    {
        memset(G,0,sizeof(G));
        cin>>e;
        for(int i=0;i<e;i++)
        {
            int u,v;
            cin>>u>>v;
            G[u][v] = 1;
        }
        int d = isBipartite(0);
        if(d)
        {
            cout << "BICOLORABLE."<<endl;
        }
        else
        {
            cout <<"NOT BICOLORABLE."<<endl;
        }
    }


	return 0;
}

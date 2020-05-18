#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void bfs(vector<ll>adj[],ll n) 
{
	queue<ll>q;
	q.push(3);
	bool vis[n+1]={false};
	vis[3]=true;
	
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		cout<<node<<" ";
		
		for(auto it:adj[node])
		{
			if(!vis[it])
			{
				vis[it]=true;
				q.push(it);
			}
		}
	}
}
	
	
int main()
{
	//n-number of vertices
	//m-number of edges
	ll n,m;
	cin>>n>>m;
	vector<ll>adj[n+1];
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(adj,n);
}

/*6 8 
1 2
1 3
2 4
2 5
3 5
4 5
4 6
5 6*/


1-3 4 5
2-3 5 4
3-4 5
4-
5-

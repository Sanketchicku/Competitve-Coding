#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void dfs(vector<ll>adj[],bool vis[],ll node) 
{
	vis[node]={true};
	cout<<node<<" ";
	
	for(auto i:adj[node])
	{
		//cout<<i<<" ";
		
		if(vis[i]==false)
		{
		dfs(adj,vis,i);
		//cout<<"called";
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
	bool vis[n+1]={false};
	dfs(adj,vis,1);
return 0;
}

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h> 
using namespace std; 


void dfs(vector<int> adj[],int s, bool visited[])
{
    visited[s]=true;
    for(int x:adj[s])
    {
        if(visited[x]==false)
        {
            dfs(adj,x,visited);
        }
        
    }
}

int findMother(int V, vector<int> adj[]) 
{ 
    int mother=0;
    bool visited[V+1];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            dfs(adj,i,visited);
            mother=i;
        }
    }
    
    bool vis[V+1];
    memset(vis,false,sizeof(vis));
    dfs(adj,mother,vis);
    for(int i=0;i<V;i++)
    {
        if(vis[i]==false)
        {
            mother=-1;
        }
    }
    return mother;
} 


//int findMother(int V, vector<int> adj[]) 
//{ s
    // Your code here	
//} 

// { Driver Code Starts.


int main() 
{ 
    int T;
    cin>>T;
    while(T--){
        int num, edges;
        cin>>num>>edges;
        
        vector<int> adj[num];
        
        int u, v;
        while(edges--){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        cout<<findMother(num, adj)<<endl;
    }

	return 0;
}   // } Driver Code Ends// } Driver Code Ends

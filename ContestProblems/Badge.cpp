#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

vector<vector<int>> adj(1005);
int vis[1005];

int dfs(int u){
	vis[u] = 1;
	int res = -58;
	for(int i = 0; i<adj[u].size(); i++){
		if(vis[adj[u][i]] == 1) return adj[u][i];
		res = dfs(adj[u][i]);
	}
	return res;
}

int main(){
	int n; cin>>n;
	for(int i = 1; i<=n ; i++){ int node; cin>>node;  adj[i].push_back(node);}
	int ans;
	for(int i = 1; i<=n; i++){
		ans = dfs(i);
		for(int j = 1; j<=n ; j++) vis[j] = 0; 
		if(i == n) cout<<ans<<"\n";
		else cout<<ans<<" ";
	}
}

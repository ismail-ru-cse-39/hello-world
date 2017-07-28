/*Lightoj 1094-farthest node in a tree
level:easy
here at first we run a BFS at node 0 then calculate 
distance of other nodes

then find out the last node which distance is greater than source
then again run BFS and this time again make the source's distance zero
.If you stil in dark then i will suggest you to do some paper work with given
input you will find the solution*/  



#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define pii pair<int,int>
#define sz 30000+23

vector<pii>grp[sz];
int visited[sz];
int test;
int dist[sz];

void Bfs(int src){
	
	queue<int>q;
	dist[src] = 0; //here we are making distance of source 0 so whenever we call the bfs second time the src is set to 0

	visited[src] = 1;
	q.push(src);
	
	while(!q.empty()){
		int u = q.front();
		q.pop();
		
		for(int i = 0 ; i < grp[u].size() ; i++){
			int v = grp[u][i].first;
			
			if(visited[v] == 0){
				visited[v] = 1;
				dist[v] = dist[u] + grp[u][i].second;
				//cout<<dist[v]<<endl;
				q.push(v);
			}
		}
	}
}

int main()
{
	sc(test);
	int u,v,w,nodes;
	
	
	for(int i = 1 ; i <= test ; i++){
		sc(nodes);
		for(int k = 0 ; k<= nodes ; k++){
			grp[k].clear();
			visited[k] = 0;
			dist[k] = 0;
		}
		for(int j = 0 ; j < nodes-1 ; j++){
			sc(u);
			sc(v);
			sc(w);
			
			grp[u].push_back(pii(v,w));
			grp[v].push_back(pii(u,w));
			
		}
		int src = 0;
		
		Bfs(src);
		
		for(int j = 0 ; j < nodes ; j++){
			if(dist[j] >= dist[src]){
				src = j;
			}
			visited[j] = 0;
		}	
		
		Bfs(src);
		
		int result = *max_element(dist,dist+nodes);//find the maximum element of the array
		
		printf("Case %d: %d\n",i,result);
		
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define sc(a) scanf("%d",&a)
#define SZ 100000
#define ll long long

vector<pair<int,int>>adj[SZ+10];
vector<int>an;
int dp[SZ+10],mndp[SZ+10];
int vis[SZ+10];
int V;

void ad(int v,int p = V)
{
    if(v == V){
        return;
    }
    for(int i = 0 ; i < adj[v].size(); i++){
        int u = adj[v][i].first;
        if(u == p ||(mndp[u] != dp[V] && u!= V) ){
            continue;
        }
        an.push_back(adj[v][i].second);
        ad(u,v);
        return;

    }
}

bool go(int v, int p = 0 )
{
    vis[v] = 1;
    mndp[v] = dp[v] = dp[p]+1;
    bool good = true;
    int cy = 0;
    for(int i = 0; i < adj[v].size(); i++){
        int u = adj[v][i].first;
        if(u == p){
            continue;
        }
        if(vis[u] == 2){
            if(mndp[u] < dp[v]){
                good = false;
            }
            continue;
        }
        if(vis[u] == 0 ){
            bool t = go(u,v);
            if(t && mndp[u] == dp[v]){
                an.push_back(adj[v][i].second);
                V = v;
                ad(u);
            }
            else if(mndp[u] < dp[v]){
                good &= t;
            }
            mndp[v] = min(mndp[v] , mndp[u]);

        }
        if(mndp[u] < dp[v] ){
            ++cy;
        }
        if(vis[u] == 1){
            mndp[v] = min(mndp[v], dp[u]);
        }
    }

    good &= cy <= 1;
    vis[v] = 2;
    return good;
}


void input_graph(int m)
{
    for(int i = 1 ; i <= m ; i++){
        int u,v;
        sc(u);
        sc(v);
        adj[u].push_back(make_pair(v,i));
        adj[v].push_back(make_pair(u,i));
    }
}

int main()
{
    int n,m;

    sc(n);
    sc(m);

    input_graph(m);

    for(int i = 1 ; i <= n ; i++){
        if( !vis[i]){
            go(i);
        }
    }

    sort(an.begin(),an.end());
    printf("%d\n",an.size());

    for(int i = 0; i < an.size(); i++){
        if(i){
            printf(" ");
        }
        printf("%d",an[i]);
    }

    printf("\n");

    return 0;
}

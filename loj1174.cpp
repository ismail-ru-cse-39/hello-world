/*lightoj-1174
level:easy(tricky)
Algorithm: BFS/DFS
There is an unlimited supply of commando troops for the mission, so we can assign one commando
for destroying one building. So, the i'th commando have to:
1. Start from the building s and go to the i'th building
2. From the i'th building, go to building d
So, we have to calculate (shortest path from s to i) + (shortest path from d to i)
for all commandos, and find the maximum value among these.
*/

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)
#define sz 100+10

int visited[sz],t,s,d,n,e;
int dis_1[sz],dis_2[sz];
vector<int>grp[sz];

void Bfs1(int src){
    int i;

    queue<int>q;
    q.push(src);
    visited[src] = 1;
    dis_1[src] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int  i = 0 ; i < grp[u].size() ; i++){
            int v = grp[u][i];

            if(visited[v] == 0){

                q.push(v);
                dis_1[v] = dis_1[u] + 1;
                //cout<<dis_1[v]<<endl;
                visited[v] = 1;
            }
        }
    }
}

void Bfs2(int src){
    int i;

    queue<int>q;
    q.push(src);
    visited[src] = 1;
    dis_2[src] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 0 ; i < grp[u].size() ; i++){
            int v = grp[u][i];

            if(visited[v] == 0){
                dis_2[v] = dis_2[u] + 1;
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    sc(t);

    for(int i = 1; i <= t; i++){
        for(int k = 0 ; k <sz ; k++){
            grp[k].clear();
        }

        sc(n);
        sc(e);
        while(e--){
            int u,v;

            sc(u);
            sc(v);

            grp[u].push_back(v);
            grp[v].push_back(u);
        }
        sc(s);
        sc(d);
        //int dis_1[sz],dis_2[sz];
        memset(visited,0,sizeof visited);
        memset(dis_1,0,sizeof dis_1);
        Bfs1(s);
        memset(visited,0,sizeof visited);
        memset(dis_2,0,sizeof dis_2);
        Bfs2(d);
        int result = 0;
        for(int j = 0 ; j < sz ; j++){
            //cout<<dis_1[j]<<" "<<dis_2[j]<<endl;
            result = max(result, dis_1[j] + dis_2[j]);
        }

        printf("Case %d: %d\n",i,result);
    }

    return 0;
}


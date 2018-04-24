#include<bits/stdc++.h>
using namespace std;
#define SZ 200000+5
#define sc(a) scanf("%d",&a)

vector<int>adj[SZ],stk;
bool mark[SZ];
int root;

void DFSD(int s)
{
    if(mark[s]){
        return;
    }
    mark[s] = true;
    stk.push_back(s);

    for(int i = 0; i < adj[s].size(); i++){
        DFSD(adj[s][i]);
    }
}

void DFS(int s)
{
    int deg = 0;
    if(s != root)deg++;
    for(int i = 0 ; i < adj[s].size(); i++){
        DFS(adj[s][i]);
        if(!mark[adj[s][i]]){
            deg++;
        }
    }
    if(deg %2 == 0){
        DFSD(s);
    }
}

int main()
{
    int n;
    sc(n);

    for(int i = 1; i <= n ; i ++){
        int tmp;
        sc(tmp);
        adj[tmp].push_back(i);
        if(tmp == 0){
            root = i;
        }
    }
    DFS(root);

    if(stk.size() < n){
        cout<<"NO"<<endl;
    }
    else{
        printf("YES\n");
        for(int i = 0 ; i < n ; i++){
            printf("%d\n",stk[i]);
        }
    }

    return 0;

}

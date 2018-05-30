//http://codeforces.com/contest/981/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define SZ 100000+10
#define scll(a) scanf("%I64d",&a)

vector<ll>graph[SZ];
vector<ll>leafs;
ll n,u,v,i,j,c,cc,s;

void take_input()
{
    scll(n);

    for(i = 1 ; i < n ; i++){
        scll(u);
        scll(v);

        graph[u].push_back(v);
        graph[v].push_back(u);
    }


}

void solution()
{
    c = 0;
    for(i = 1 ; i <= n ; i++){
        s = graph[i].size();

        if(s == 1){
            leafs.push_back(i);
        }
        else if(s >2){
            if(c > 0 ){
                cout<<"No"<<endl;
                return ;
            }
            else{
                c = 1;
                cc = i;
            }
        }
    }
//
//    cout<<leafs.size()<<endl;
//    cout<<c<<" "<<cc<<endl;
//    for(i = 0 ; i < leafs.size(); i++){
//        cout<<leafs[i]<<endl;
//    }

    if(c == 0){
        cc = leafs.back();
        leafs.pop_back();
    }

    cout<<"Yes"<<endl;
    cout<<leafs.size()<<endl;



    for(auto it : leafs){
        cout<<cc<<" "<<it<<endl;
    }

    return ;
}


int main()
{
    take_input();
    solution();

    return 0;
}

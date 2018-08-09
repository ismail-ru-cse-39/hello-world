
//http://codeforces.com/contest/1016/problem/A

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,m;
    int i;

    vector<int>vi;

    cin>>n>>m;

    for(i = 0 ;  i < n ; i++){
        int tmp;

        sc(tmp);

        vi.push_back(tmp);
    }

    //cout<<"HI"<<endl;

    //vector<int>vi_cnt;
    int vi_cnt[n+1];

    int rest = 0;

    for(i = 0; i < n ; i++){
        if(rest > 0){
        vi_cnt[i] = ((vi[i]+rest)/m);
        }
        else{
            vi_cnt[i] = ((vi[i])/m);
        }

       int tmp = rest;
        rest = ((vi[i]+rest)%m);
    }

    for(i = 0 ; i < n ; i++){
        printf("%d ",vi_cnt[i]);
    }

    cout<<endl;

    return 0;
}

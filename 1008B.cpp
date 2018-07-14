//http://codeforces.com/contest/1008/problem/B;

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

vector<int>vi_w;
vector<int>vi_h;

int main()
{

    //cout<<max(1000,1000)<<endl;
    int n,i,j;

    sc(n);

    for(i = 0 ;  i < n; i++){
        int w,h;

        sc(w);
        sc(h);
        vi_w.push_back(w);
        vi_h.push_back(h);
    }

    for(i = 1; i < n ; i++){
        int mx = max(vi_w[i-1], vi_h[i-1]);

        if(vi_w[i] > mx && vi_h[i] > mx){
           // cout<<vi_w[i]<<" "<<vi_h[i]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}

//http://codeforces.com/contest/1015/problem/C

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%I64d",&a)

int main()
{
    long long m,n,i,j,sum_o = 0 , sum_c = 0;
    vector<long>vi;

    cin>>n>>m;

    for(i = 0 ; i < n ; i++){
        int o,c;

        sc(o);
        sc(c);

        sum_o += o;
        sum_c += c;
        vi.push_back(o-c);
    }

    if(sum_o <= m){
        cout<<0<<endl;
        return 0;
    }

    if(sum_c > m){
        cout<<-1<<endl;
        return 0;
    }


    int cnt = 0;

    sort(vi.begin(),vi.end());
    //cout<<vi.size()<<endl;
    for(i = vi.size()-1; i >= 0 ; i--){
        sum_o -= vi[i];
        //cout<<vi[i]<<endl;
        cnt++;

        if(sum_o <= m){
            cout<<cnt<<endl;
            return 0;
        }
    }
    return 0;
}

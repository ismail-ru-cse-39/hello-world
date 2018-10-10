//http://codeforces.com/contest/1059/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    long long int l,n,a,cnt = 0;

    cin>>n>>l>>a;

    ll tmp = 0;

    for(ll i = 0 ; i < n ; i++){
            ll t,li;
            cin>>t>>li;

            if(t - tmp >= a){
                cnt+= (t-tmp)/a;
            }
            tmp = t+li;
    }

    cnt+= (l-tmp)/a;

    cout<<cnt<<endl;

    return 0;
}

//sorting
//tricky

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define scll(a) scanf("%I64d",&a)

map<ll,ll>mpll;

int main()
{
    ll cas,n,a,b;

    for(cas = 0 ; cas < 2 ; cas++){
        scll(n);
        for(ll i = 0 ; i < n ; i++){
            scll(a);
            scll(b);

            mpll[a] = max(mpll[a], b);
        }
    }

    ll ans = 0;

    for(auto it : mpll){
        ans += it.second;
    }

    printf("%I64d\n",ans);

    return 0;
}

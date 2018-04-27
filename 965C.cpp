#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,k,m,d;

    ll ans = -1,a = 1;
    cin>>n>>k>>m>>d;

    for(int i = 1 ; i <= d ; i++){
        ll tmp = min(m,n/a);
        if(tmp == 0){
            break;
        }
        ans = max(ans,tmp*i);
        a += k;
    }

    cout<<ans<<endl;

    return 0;
}

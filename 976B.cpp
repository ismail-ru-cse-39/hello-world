//http://codeforces.com/contest/976/problem/B
//implementation

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define scll(a) scanf("%I64d",&a)

vector<vector<ll>>vll;

int main()
{
    ll n,m,k,i,j;

    cin>>n>>m>>k;


    if( k <= n-1){
        cout<<1+k<<" "<<1<<endl;
        return 0;
    }

    k -= n;

    cout<<n-k/(m-1);

    if((k/(m-1))%2){
        cout<<" "<<m-k%(m-1)<<endl;
    }
    else{
        cout<<" "<<2+k%(m-1)<<endl;
    }

    return 0;


}

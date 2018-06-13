//http://codeforces.com/contest/990/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%I64d",&a)
#define SZ 100000+5

int main()
{
    ll m,n,a,b,rest,ans = 0;

    cin>>n>>m>>a>>b;

//    if(n/m == 0){
//        cout<<n*b<<endl;
//        return 0;
//    }
    rest = n%m;

    ans = min(rest*b,(m-rest)*a);

    cout<<ans<<endl;

    return 0;
}


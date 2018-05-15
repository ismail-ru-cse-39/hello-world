//http://codeforces.com/contest/979/problem/A
//Math

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll n;
    cin>>n;
    n++;
    if(n == 1){
        cout<<0<<endl;
        return 0;
    }

    if(n%2 == 0 ){
        cout<<n/2<<endl;
        return 0;
    }

    cout<<n<<endl;

    return 0;
}

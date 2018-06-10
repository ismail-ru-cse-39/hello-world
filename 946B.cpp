//http://codeforces.com/contest/946/problem/B

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll n,m,a,b;

void GCD()
{
    while(n && m){
        if(n >= 2*m){
            n = n%(2*m);
        }
        else if(m >= 2*n){
            m = m%(2*n);
        }
        else{
            break;
        }
    }
}

int main()
{
    cin>>n>>m;

    GCD();

    cout<<n<<" "<<m<<endl;

    return 0;
}

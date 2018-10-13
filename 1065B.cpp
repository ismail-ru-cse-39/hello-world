//http://codeforces.com/contest/1065/problem/B

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll n,m;
    ll mn,mx;

    cin>>n>>m;

    if(n%2 == 0){
        if(m>= n/2){
          mn = 0;
        }

        else{
            mn = n-(m*2);
        }
    }

    else{
         if(m >= (n/2 + 1)){
          mn = 0;
        }

        else{
            mn = n-(m*2);
        }

    }


    cout<<mn<<" ";


//    mx = n - (m+1);
//
//    if(mx < 0){
//        mx = 0;
//    }
//
//    cout<<mx<<endl;


    int flag = 0;

    if(m == 0){
        cout<<n<<endl;

        return 0;
    }

    for(ll i = 1 ; i <= n ; i++){
        ll  tmp = (i*(i-1)) / 2;

        if(tmp >= m ){
            mx = n-i;
            flag = 1;
            break;
        }

//        if(tmp > m){
//            mx = n - i + 1;
//            cout<<mx<<" "<<i<<endl;
//            break;
//        }

    }


    cout<<mx<<endl;

    return 0;
}

//http://codeforces.com/contest/1020/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ll n, h, a, b, k;

    cin>>n>>h>>a>>b>>k;



    ll i;

    for( i = 0 ; i < k ; i++){
        ll x1, y1, x2, y2;


        cin>>x1>>y1>>x2>>y2;

        if(x1 == x2){
            cout<<abs(y1-y2)<<endl;
        }
        else{
            if(y1 < a && y2 < a){
                cout<<abs(x1-x2)+a-y1+a-y2<<endl;
            }
            else if(y1 > b && y2 > b){
                cout<<abs(x1-x2)+y1-b+y2-b<<endl;
            }
            else{
                cout<<abs(x1-x2)+abs(y1-y2)<<endl;
            }
        }


    }


    return 0;
}

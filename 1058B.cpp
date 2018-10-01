//http://codeforces.com/contest/1058/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,m;

    int i;

    int p1,p2,p3,p4;


    cin>>n>>d;

    p1 = d; //(0,d) x+y;
    p2 = 2*n - d; //(n-d, n) x+y
    p3 = -d; //(n-d, n) x-y
    p4 = d; //(n, n-d) x-y;

    cin>>m;

    for(i = 0 ; i < m ; i++){
        int x,y;

        cin>>x>>y;

        if((p1 <= x+y && x+y <= p2) && (p3 <= x-y && x-y <= p4) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

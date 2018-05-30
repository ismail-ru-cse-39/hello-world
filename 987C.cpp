//http://codeforces.com/contest/987/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define scll(a) scanf("%I64d",&a)

int64_t i,j, n,m,s[3000+10],c[3000+10],check[3000+10];

void take_input()
{
    scll(n);

    for( int i = 0 ; i < n ; i++){
        scll(s[i]);
        //scll(c[i]);

    }
     for( int i = 0 ; i < n ; i++){
        //scll(s[i]);
        scll(c[i]);

    }
    //cout<<c[n-1]<<endl;
}

ll solution()
{
    for( i = 1 ; i< n ; i++){
        for( j = 0, m = 2e9; j < i ; j++){
            if(s[j] < s[i]){
                m = min(m,c[i]+c[j]);
            }

        }
        check[i] = m;
    }

    for( i = 2,m =2e9; i < n ; i++){
        for( j = 1 ; j < i ; j++){
            if(s[j] < s[i]){
                m = min(m,c[i]+check[j]);
            }
        }
    }

    if(m < 2e9){
       // cout<<m<<endl;
        return m;
    }

    else{
        return -1;
    }
}

int main()
{

    take_input();
    ll result= solution();

    cout<<result<<endl;

    return 0;
}

//http://codeforces.com/contest/1004/problem/B

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,m,l,r;

    cin>>n>>m;

    for(int i = 0 ; i < m ; i++){
        sc(l);
        sc(r);
    }

    for(int i = 1 ; i <= n ; i++){
        if(i%2 == 0){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    cout<<endl;

    return 0;

}


//http://codeforces.com/contest/1017/problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,rt,i,j;

    cin>>n;

    rt = sqrt(n);

    for(i = 0 ; i < n ; i += rt){
        for(j = min(n, i+rt) ; j > i ; j--){
            printf("%d ",j);
        }
    }

    cout<<endl;

    return 0;
}

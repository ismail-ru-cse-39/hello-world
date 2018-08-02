//http://codeforces.com/contest/1015/problem/A

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a);

int main()
{
    int m,n;
    int arr[120];

    cin>>n>>m;

    for(int i = 1 ; i <= m ; i++){
        arr[i] = 0;
    }

    for(int i = 1 ; i <= n ; i++){
        int tmp1,tmp2;
        sc(tmp1);
        sc(tmp2);

        for(int j = tmp1 ; j <= tmp2 ; j++){
            arr[j] = 1;
        }
    }

    int cnt = 0;

    for(int i = 1 ; i <= m ; i++){
        if(arr[i] != 1){
            //cout<<i<<" ";
            cnt++;
        }
    }

    cout<<cnt<<endl;

    for(int i = 1 ; i <= m ; i++){
         if(arr[i] != 1){
            cout<<i<<" ";
            //cnt++;
        }
    }


    cout<<endl;


    return 0;

}

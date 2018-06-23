//http://codeforces.com/contest/999/problem/A

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,k;
    int arr[200];
    int i,j;
    int cnt1 = 0, cnt2 = 0;

    sc(n);
    sc(k);

    for(i = 1 ; i <= n ; i++){
        sc(arr[i]);
    }

    for(i = 1 ; i <= n ; i++){
        if(arr[i] > k ){

            break;
        }


        cnt1++;
    }
//    cout<<i<<endl;
//    cout<<cnt1<<endl;
    i--;

    for(j = n ; j > 0 ; j--){
//        cout<<j<<endl;
        if(arr[j] > k || i == j){
            break;
        }
        cnt1++;
    }

    cout<<cnt1<<endl;

    return 0;

}


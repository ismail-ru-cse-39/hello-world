//http://codeforces.com/contest/1005/problem/A

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

int cntarr[10000];

int main()
{
    int i,n,cnt,arr[10000],j=0;

    cin>>n;

    for(i = 0 ; i < n ; i++){
        sc(arr[i]);
    }

    cnt = 1;

    for(i = 1 ; i < n ; i++){
        if(arr[i] == 1){
            cntarr[j++] = cnt;
            cnt = 1;
        }
        else{
        cnt++;
        }
    }


    cout<<j+1<<endl;

    for(i = 0 ; i < j ; i++){
        cout<<cntarr[i]<<" ";
    }

    cout<<cnt<<endl;

    return 0;

}


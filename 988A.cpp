//http://codeforces.com/contest/988/problem/A

#include <bits/stdc++.h>

using namespace std;

int arr[1000];
map<int,int>mpint;

int main()
{
    int n,k,i,cnt=0;

    cin>>n>>k;

    for(i = 1 ; i <= n ; i++){
        cin>>arr[i];
        mpint[arr[i]]++;
    }

    if(mpint.size() >= k){
        cout<<"YES"<<endl;
        for(auto it:mpint){
            for(i = 1 ; i<= n ; i++){
                if(it.first == arr[i]){

                    cout<<i<<" ";
                    cnt++;
                     break;
                }

            }
            if(cnt == k){
                return 0;
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

//http://codeforces.com/contest/982/problem/B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define scll(a) scanf("%I64d",&a)


int main()
{
    ll n,i;
    cin>>n;

    pair<ll,ll>arr[n];

    for(i = 0 ; i < n ; i++){
        cin>>arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr,arr+n);

    stack<ll>stk;
    ll c = 0;

    string str;
    cin>>str;


    for(i = 0 ; i < 2*n ; i++){
        if(str[i] == '0'){
            cout<<arr[c].second;
            stk.push(arr[c].second);
            c++;
        }
        else{
            cout<<stk.top();
            stk.pop();

        }
        cout<<" ";
    }

    cout<<endl;

    return 0;
}

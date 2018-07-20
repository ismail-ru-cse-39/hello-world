//http://codeforces.com/contest/1006/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>vll;
    long long int n,i,tmp;

    cin>>n;

    for(i = 0 ; i < n ; i++){
        cin>>tmp;
        if(tmp %2 == 0){
            tmp--;
        }
        vll.push_back(tmp);
    }

    for(i = 0; i < n ; i++){
        cout<<vll[i]<<" ";
    }
    cout<<endl;

    return 0;


}

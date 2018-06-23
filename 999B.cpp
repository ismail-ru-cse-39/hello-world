//http://codeforces.com/contest/999/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,i;

    cin>>n;
    cin>>str;

    for(i = 1; i <= n ; i++){
        if(n%i == 0){
            reverse(str.begin(),str.begin()+i);
        }
    }

    cout<<str<<endl;

    return 0;
}

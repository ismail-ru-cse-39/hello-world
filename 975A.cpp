//http://codeforces.com/contest/975/problem/A
//implementation

#include<bits/stdc++.h>
using namespace std;

set<set<char>>strSet;

int main()
{
    int n,i;

    cin>>n;
    string str;

    for(i = 0 ; i < n ; i++){
        cin>>str;

        strSet.emplace(str.begin(),str.end());

    }

    cout<<strSet.size()<<endl;

    return 0;
}

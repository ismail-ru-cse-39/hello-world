//http://codeforces.com/contest/975/problem/A
//implementation

#include <bits/stdc++.h>

using namespace std;

set<string>strSet;

int main()
{
    int n,i;
    cin>>n;


    for(i = 0 ; i < n ; i++)
    {
        string str;

        cin>>str;
        sort(str.begin(),str.end());

        str = string(str.begin(),unique(str.begin(),str.end()));

        //cout<<str<<endl;

        strSet.insert(str);
    }

    cout<<strSet.size()<<endl;

    return 0;
}

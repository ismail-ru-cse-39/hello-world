//http://codeforces.com/contest/981/problem/A
//string
//implementation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin>>str;

    while(str.size()){
        string tmp_str;
        tmp_str = str;
        reverse(tmp_str.begin(), tmp_str.end());
        if(tmp_str != str){
            break;
        }
        str.pop_back();
    }
    cout<<str.size()<<endl;

    return 0;
}

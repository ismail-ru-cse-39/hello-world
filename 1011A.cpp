//http://codeforces.com/contest/1011/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,k,mn;

    cin>>n>>k;
    cin>>str;

    sort(str.begin(),str.end());
    char ch = str[0];

    int cnt = 0;
    mn = str[0] - 'a' +1;

    //cout<<str<<endl;

    for(int i = 1 ; i < str.length() ; i++){
        if(str[i] > ch+1){
            if(cnt == k-1){
                break;
            }
            mn += str[i] - 'a' + 1;
            ch = str[i];
            //cout<<mn<<" "<<str[i]<<endl;
            cnt++;

        }
    }

    if(cnt < k-1){
        cout<<-1<<endl;
        return 0;
    }
    cout<<mn<<endl;

    return 0;
}

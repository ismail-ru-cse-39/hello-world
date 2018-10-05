#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt = 0;
    string str;

    cin>>n;
    cin>>str;

    for(i = 0 ; i < n ; i++){
        if(str[i] == '8'){
            cnt++;
        }
    }

    int tmp;
    tmp = n/11;

    if(tmp > 0){
        if(cnt >= tmp){
            cout<<tmp<<endl;
            return 0;
        }
        else{
            cout<<cnt<<endl;
            return 0;
        }
    }

    cout<<0<<endl;

    return 0;
}

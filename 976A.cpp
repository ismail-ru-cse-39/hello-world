//http://codeforces.com/contest/976/problem/A
//implementation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,i,cnt = 0;

    cin>>n>>str;

    int l = str.length();

    for(i = 0 ; i < l ; i++){
        if(str[i] == '1'){
            cnt++;
        }
    }

    if(cnt > 0){
        cout<<1;

    }


    for(i = 1 ; i < (l-cnt+1); i++){
        printf("0");
    }

    printf("\n");

    return 0;
}

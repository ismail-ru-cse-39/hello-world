//http://codeforces.com/contest/985/problem/B

#include <bits/stdc++.h>

using namespace std;
#define SZ 2000+10
int n,m;
vector<string>s(SZ);
vector<int>cnt(SZ);

void input()
{
    cin>>n>>m;

    int i,j;

    for(i = 0 ; i < n ; i++){
        cin>>s[i];
        for(j = 0; j < m ; j++){
            if(s[i][j] == '1' ){
                cnt[j]++;
            }
        }
    }
}

void solution()
{
    for(int i = 0; i < n ; i++){
        bool flag = true;
        for(int j = 0; j < m ; j++){
            if(s[i][j] == '1' && cnt[j] == 1){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;
}

int main()
{
    input();
    solution();

    return 0;
}

//http://codeforces.com/problemset/problem/876/A

#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;


void take_input()
{
    cin>>n>>a>>b>>c;

}

void solution()
{
    int mn = min(min(a,b),c);
    int ans;

    if(mn == a || mn == b || n == 1){
        ans = mn*(n-1);
    }
    else{
        ans = min(a,b) + c*(n-2);
    }

    cout<<ans<<endl;


}

int main()
{
    take_input();
    solution();
}

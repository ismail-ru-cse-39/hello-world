//http://codeforces.com/contest/992/problem/B

#include <bits/stdc++.h>

using namespace std;

int GCD(int a , int b)
{
    while(b){
        int t = a%b;
        a = b;
        b = t;
    }

    return a;
}

int main()
{
    int l,r,x,y;

    cin>>l>>r>>x>>y;

    if(y%x != 0){
        cout<<0<<endl;
        return 0;
    }

    int ans = 0;
    int n = y / x;


    for(int i = 1 ; i*i <= n; i++){
        if(n%i == 0){
            int c = n/i;
            if(l <= c*x && c*x <= r && l<= i*x && i*x <= r && GCD(c,i) == 1){
                if(i*i == n){
                    ans+=1;
                }
                else{
                    ans += 2;
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}

//http://codeforces.com/contest/967/problem/A
//implementation

#include <bits/stdc++.h>

using namespace std;

#define SZ 100000+10
#define sc(a) scanf("%d",&a)

int main()
{
    int n,s,h,m;

    cin>>n>>s;
    int t1 = 0, t2 = 0;
    int flag = 0;
    int res = 0;
    for(int i = 1 ; i <= n ; i++){
        cin>>h>>m;


        if(flag == 1)continue;
        int t = t1*60+t2;
        int tt = h*60+m;

         if(i == 1 ){
            if((s+1) <= (tt - t)){
                flag = 1;
            res =0;
            }
        }


        if(((s*2+2) <= (tt-t)) && flag != 1){
            flag = 1;
            res = t+s+1;

//            cout<<endl;
//            cout<<h<<" "<<m<<endl;
        }

          if(i == n && flag != 1 ){
            res = tt+s+1;
            flag = 1;
        }
        t1 = h;
        t2 = m;
    }

    cout<<res/60<<" "<<res%60<<endl;

    return 0;
}

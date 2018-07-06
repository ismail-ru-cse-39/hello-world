//http://codeforces.com/contest/1004/problem/A

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)

vector<int>vi;

int main()
{
    int cnt = 2;
    int i,n,d;

    cin>>n>>d;

    for(i =0 ;  i < n ; i++){
        int tmp;
        sc(tmp);
        vi.push_back(tmp);
    }

    for(i = 0 ;  i < n-1 ; i++){
        if((abs(vi[i] - vi[i+1]))> 2*d){
            cnt+=2;
        }
        else if(abs(vi[i]-vi[i+1]) == 2*d){
            cnt++;
        }
        else{
            continue;
        }
    }


    cout<<cnt<<endl;

    return 0;
}

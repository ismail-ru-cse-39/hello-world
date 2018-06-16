//http://codeforces.com/contest/990/problem/B

#include <bits/stdc++.h>
using namespace std;
#define SZ 100000*2+10
#define sc(a) scanf("%d",&a)


int main()
{
    int n,k;
    vector<int>vi;
    int i,j;

    cin>>n>>k;

    for(i = 0 ; i < n ; i++){
        int tmp;
        sc(tmp);

        vi.push_back(tmp);
    }


    sort(vi.begin(),vi.end());

    int cnt = 0,u = 0;

    vi.push_back(int(2e9));
    n++;
    for(i = 0 ; i < n-1 ; i++){
        while(u < n && vi[i] == vi[u]){
            u++;
        }
        if(vi[u] - vi[i] > k){
            cnt++;
        }
    }


    cout<<cnt<<endl;

    return 0;
}

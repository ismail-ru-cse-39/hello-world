//http://codeforces.com/contest/1003/problem/A

#include <bits/stdc++.h>
using namespace std;

 map<int,int>mpi;

int main()
{

    int n,i;

    cin>>n;

    for(i = 0 ; i < n ; i++){
        int tmp;

        cin>>tmp;
        mpi[tmp]++;
    }

    int mx = 0;

    for(auto &it:mpi){
        mx = max(mx,it.second);
    }

    cout<<mx<<endl;

    return 0;
}

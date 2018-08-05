//http://codeforces.com/contest/1013/problem/A
#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,i;
    //vector<int>vi1,vi2;
    long long int sum1 = 0, sum2 = 0;
    sc(n);

    for(i = 0 ; i < n ; i++){
        int tmp;
        sc(tmp);
        sum1+= tmp;

        //vi1.push_back(tmp);
    }


    for(i = 0 ; i < n ; i++){
        int tmp;
        sc(tmp);
        sum2+= tmp;
        //vi2.push_back(tmp);
    }

    if(sum1 >= sum2){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;


    return 0;

}

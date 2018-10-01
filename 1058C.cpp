//http://codeforces.com/contest/1058/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,pos;
    string str;

    cin>>n>>str;
    int sum = 0;

    for(i = 0 ; i < n ; i++){

        sum+= str[i] - '0';
        pos = i+1;

        int flag = 1;
        int sum1 = 0;

        while(pos < n){
            sum1 = str[pos++] - '0';

            while(pos < n && sum1+str[pos] - '0' <= sum){
                sum1 += str[pos] - '0';
                ++pos;
            }

            if(sum1 != sum){
                flag = 0;
            }
        }

        if(sum1 != sum){
            flag = 0;
        }

        if(flag == 1){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}

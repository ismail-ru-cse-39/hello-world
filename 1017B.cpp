//http://codeforces.com/contest/1017/problem/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    string str1,str2;

    cin>>n;
    cin>>str1>>str2;

    int cnt_0_0 = 0, cnt_1_0 = 0,cnt_1 = 0, cnt_0 = 0;

    for(i = 0 ; i < n ; i++){
        if(str1[i] == '0' && str2[i] == '0'){
            cnt_0_0++;
        }
        if(str1[i] == '1'){
            cnt_1++;
        }

        if(str1[i] == '1' && str2[i] == '0'){
            cnt_1_0++;
        }
        if(str1[i] == '0' && str2[i] == '1'){
            cnt_0++;
        }
    }

    unsigned long int result = (cnt_0_0 * cnt_1)+(cnt_1_0 * cnt_0);


    cout<<result<<endl;

    return 0;
}

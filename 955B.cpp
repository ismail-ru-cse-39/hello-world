//http://codeforces.com/contest/955/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string str;

    cin>>str;
    map<char,int>mpchari;

    ll str_length = str.length();

    if(str_length < 4)
    {
        cout<<"NO"<<endl;

        return 0;
    }

    for(ll i = 0 ; i< str_length ; i++)
    {
        mpchari[str[i]]++;

    }

    ll sz = mpchari.size();

    if(sz > 4)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(sz == 4)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(sz == 3 && str_length >= 4)
    {
        cout<<"YES"<<endl;
        return 0;
    }



    if(sz == 2 )
    {
        ll tmp  =0 ;
        for(ll i = 0 ; i < str_length ; i++)
        {
            if(mpchari[str[i]] == 1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }


        cout<<"YES"<<endl;
        return 0;
    }


    cout<<"NO"<<endl;

    return 0;
}

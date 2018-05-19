//http://codeforces.com/contest/982/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i,n;

    cin>>n;

    cin>>str;

    if(str[0] == '0' && str[1] == '0'){
        cout<<"NO"<<endl;
        return 0;
    }

    if(n == 1  )
    {
        if(str[0] == '0')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    int cnt = 0;
    for(i = 0 ; i < n-1 ; i++)
    {
//        if(str[i] == '0' && str[i+1] == '0' && str[])
//        {
//            cout<<"NO"<<endl;
//            return 0;
//        }


        if(str[i] == '1')
        {
            cnt = 0;
        }
        else
        {
            cnt++;
        }

        if(cnt == 3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(str[i] == '1' && str[i+1] == '1')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    if(str[n-1] == '0')
    {
        cnt++;
        if(cnt >= 2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }





    cout<<"YES"<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

map<char,int>mpchint;


int main()
{
    //VBDSUEQPQOPQWEXXCZ
    string str;
    mpchint['B'] = 1;
    mpchint['F'] = 1;
    mpchint['V'] = 1;
    mpchint['C'] = 2;
    mpchint['G'] = 2;
    mpchint['P'] = 1;
    mpchint['J'] = 2;
    mpchint['K'] = 2;
    mpchint['Q'] = 2;
    mpchint['S'] = 2;
    mpchint['X'] = 2;
    mpchint['Z'] = 2;
    mpchint['D'] = 3;
    mpchint['T'] = 3;
    mpchint['L'] = 4;
    mpchint['M'] = 5;
    mpchint['N'] = 5;
    mpchint['R'] = 6;
    while(cin>>str)
    {
        if(mpchint[str[0]] != 0)
            cout<<mpchint[str[0]];
        for(int i = 1 ; i < str.length() ; i++)
        {
            if(mpchint[str[i]] != mpchint[str[i-1]])
            {
                if(mpchint[str[i]] != 0)
                {
                    cout<<mpchint[str[i]];
                }
            }
        }
        cout<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i,j,l;
    int mx = 0;

    cin>>l>>str;

    //l = str.length();
    char fch1 ,fch2;

    for(i = 0 ; i < l-1 ; i++)
    {
        char ch1 = str[i];
        char ch2 = str[i+1];
        int cnt = 1;

        for(j = i+1 ; j < l-1 ; j++)
        {
            char ch3,ch4;

            ch3 = str[j];
            ch4 = str[j+1];

            if(ch1 == ch3 && ch2 == ch4)
            {
                cnt++;
            }

        }
        if(cnt > mx)
        {
            mx = cnt;
            fch1 = ch1;
            fch2 = ch2;
        }
    }

    cout<<fch1<<fch2<<endl;

    return 0;
}

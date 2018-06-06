//http://codeforces.com/contest/954/problem/A

#include <bits/stdc++.h>

using namespace std;

int n,i;
vector<char>vchar;
string str;

void take_input()
{
    cin>>n;
    cin>>str;
}

void solution()
{
    int l = str.length();
    str[l] = 'Z';

    for(i = 0 ; i < l ; i++)
    {
        if(str[i] == 'R' || str[i] == 'U')
        {
            if(str[i] == 'R' && str[i+1] == 'U')
            {
                i++;
                vchar.push_back('D');
            }
            else if(str[i] == 'U' && str[i+1] == 'R')
            {
                i++;
                vchar.push_back('D');
            }
            else
            {
                vchar.push_back(str[i]);
            }
        }
    }

    cout<<vchar.size()<<endl;
    return;
}


int main()
{
    take_input();
    solution();

    return 0;
}

//http://codeforces.com/contest/1015/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,cnt = 0;
    string str1,str2;
    int l;
    vector<int>vi;

    cin>>l;
    cin>>str1>>str2;

    for(i = 0 ; i < l ; i++){
        if(str2[i] != str1[i]){
            int flag = -1;
            for(j = i+1 ; j < l ; j++){
                if(str2[i] == str1[j]){
                    //swap(str1[i],str1[i+1]);
                   // cout<<str1<<endl;
                    //cout<<i+1<<endl;
                    flag = j;
                   // vi.push_back(i+1);
                    break;
                }
            }
            if(flag == -1){
                cout<<-1<<endl;
                return 0;
            }

            for(j = flag - 1 ; j >= i ; j--){
                swap(str1[j], str1[j+1]);
                vi.push_back(j+1);
            }
        }
    }

    cout<<vi.size()<<endl;

    for(i = 0 ; i < vi.size() ; i++){
        cout<<vi[i]<<" ";
    }

    cout<<endl;

    return 0;
}

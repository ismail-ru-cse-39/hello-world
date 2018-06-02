//http://codeforces.com/contest/988/problem/B
#include <bits/stdc++.h>

using namespace std;

vector<string>vstr;


int main()
{
    int i,n,l;

    cin>>n;


    for(i = 0 ; i < n ; i++){
        string tmp;
        cin>>tmp;
        vstr.push_back(tmp);

    }

    struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

//std::vector<std::string> vstr;
compare c;
std::sort(vstr.begin(), vstr.end(), c);
    //sort(vstr.begin(),vstr.end());

//    for(i = 0 ; i< vstr.size() ; i++){
//        cout<<vstr[i]<<endl;
//    }

    for(i = 0 ; i < n-1 ; i++){
        if(vstr[i+1].find(vstr[i]) != std::string::npos){
           continue;
        }
        else{
             cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    for(i = 0 ; i < n ; i++){
        cout<<vstr[i]<<endl;
    }

    return 0;

}

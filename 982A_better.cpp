//http://codeforces.com/contest/982/problem/A

//Better solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	string s;
	cin>>n>>s;
	s="0"+s+"0";

	if(s.find("000")==-1&&s.find("11")==-1) printf("Yes\n");
	else printf("No\n");
 return 0;
}

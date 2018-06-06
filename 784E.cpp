//http://codeforces.com/contest/784/problem/E


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h,i,j,result;

	cin>>a>>b>>c>>d;

	e = a^b;
	f = c|d;

	h = b&c;
	i = d^a;

	g = e & f;
	j = h|i;

	result = j^g;


	//cout<<result<<endl;

	if(result){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}

	return 0;
}

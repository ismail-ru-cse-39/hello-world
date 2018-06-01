//http://codeforces.com/contest/955/problem/A

#include <bits/stdc++.h>

using namespace std;
double hh,mm;
double H,D,N;
double C;

void take_input()
{
    //cin>>hh>>mm>>H>>D>>C>>N;
    scanf("%lf %lf",&hh,&mm);
    scanf("%lf %lf %lf %lf",&H,&D,&C,&N);
}

void solution()
{
    double costA=0.0 ,costB = 0,res = 0.0;
    double buns = ceil(H*1.0/N);

    //cout<<buns<<endl;

    costA = buns*1.0*C;

    double h = (20 - hh - 1)*60 + (60 - mm);
    if((hh*60 + mm)>= 1200){
        h = 0;
    }

    if(h >= 0){
        double c = ceil((h*1.0*D+H)/N);
        costB = c*1.0*C*.8;
        cout<<min(costA,costB)<<endl;
        //double res =min(costA*1.0,costB*1.0);
        //printf("%.4f\n",res);
        return;
    }

    //printf("%lf\n",costA);
    //cout<<costA<<endl;
    //return;

}

int main()
{
    take_input();
    solution();
}

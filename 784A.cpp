//http://codeforces.com/problemset/problem/784/A

#include <bits/stdc++.h>

using namespace std;
//Smith joke's number.
int arr[] = {	4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274,
                319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562,
                576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690,
                706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922,
                958, 985, 1086, 1111, 1165
            };

int main()
{
    int n;

    cin>>n;

    cout<<arr[n-1]<<endl;

    return 0;

}

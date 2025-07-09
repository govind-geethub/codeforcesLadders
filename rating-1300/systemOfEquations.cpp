#include<bits/stdc++.h>
using namespace std;
int systemOfEquations(int n, int m)
{
    int count=0;
    vector<int>v;
    for(int i=0; i<=n; i++)
    {
        float a=sqrt(n-i);                  // check for integers which satisfy 
        if(a==(int)a) v.emplace_back(a);    // store it in 
    }
    for(int j=0; j<v.size(); j++)
    {
        float b=sqrt(m-v[j]);
        if(b==(int)b && b==n-(v[j]*v[j])) count++;      // check b for integers and check it also satisfy 1st eq.
    }
    return count;
}
int main()
{
    int n,m;
    cin >> n >> m;
    cout << systemOfEquations(n,m) << endl;
    return 0;
}
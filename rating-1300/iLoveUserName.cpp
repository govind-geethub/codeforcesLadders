#include<bits/stdc++.h>
using namespace std;
int iLoveUsername(int n, vector<int>&v)
{
    int amazing=0;
    int mini=v[0], maxi=v[0];
    for(int i=1; i<n; i++)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            amazing++;
        }
        if(v[i]<mini)
        {
            mini=v[i];
            amazing++;
        }
    }
    return amazing;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << iLoveUsername(n,v) << endl;
    return 0;
}
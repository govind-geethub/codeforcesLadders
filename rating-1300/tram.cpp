#include<bits/stdc++.h>
using namespace std;
int tram(int n, vector<pair<int,int>>&v)
{
    int maxi=0, currMaxi=0;
    for(int i=0; i<n-1; i++)
    {
        currMaxi+=v[i].second;
        maxi=max(maxi,currMaxi);
        currMaxi-=v[i+1].first;
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    cout << tram(n,v) << endl;
    return 0;
}
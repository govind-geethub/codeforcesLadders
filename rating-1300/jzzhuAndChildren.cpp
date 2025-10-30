#include<bits/stdc++.h>
using namespace std;
int jzzhuChildren(int n, int m, vector<int>&v)
{
    queue<pair<int,int>>q;
    for(int i=0; i<n; i++) q.push({v[i],i+1});

    while(q.size()>1)
    {
        int a=q.front().first;
        int p=q.front().second;
        q.pop();
        a=a-m;
        if(a>0) q.push({a,p});
    }
    return q.front().second;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    cout << jzzhuChildren(n,m,v) << endl;
    return 0;
}
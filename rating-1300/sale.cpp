#include<bits/stdc++.h>
using namespace std;
int sale(int n, vector<int>&v, int k)
{
    int sum=0;
    int size=0;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]<=0)
        {
            sum+=v[i];
            // cout << sum << endl;  for debugging
            size++;
            // cout << size << endl;
            if(size==k) break;
        }
    }
    if(size<=k) return abs(sum);
    return abs(sum);
}
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << sale(n,v,k) << endl;
    return 0;
}
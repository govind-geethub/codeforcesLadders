#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll valleyFlatten(ll n, vector<ll> &v)
{
    vector<ll> ans = v; // updated v will give different values so new vector
    vector<ll> isMin(n, 0);
    for(ll i=1; i<n-1; i++)
    {
        // minimal from both
        if(v[i] < v[i-1] && v[i] < v[i+1]) isMin[i] = 1;
    }

    for(ll i=1; i<n-1; i++)
    {
        if(isMin[i])
        {
            ans[i-1] = min(ans[i-1], v[i]);
            //cout << ans[i-1] << endl;
            
            ans[i+1] = min(ans[i+1], v[i]);
            //cout << ans[i+1] << endl;
        }
    }

    ll sum = 0;
    for(ll a : ans) sum += a;
    return sum;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << valleyFlatten(n,v) << endl;
    }
    return 0;
}
    
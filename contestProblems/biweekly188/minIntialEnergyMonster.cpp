#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    ll minInitialStrength(vector<int>& monsters, 
    vector<vector<int>>& boosts) 
    {
        ll n = monsters.size();
        vector<ll> diff(n+1, 0);
        for(auto b : boosts)
            {
                int l = b[0];
                int r = b[1];
                int v = b[2];

                diff[l] += v;
                if(r+1 < n) diff[r+1] -= v;
            }

        ll ans = 0;
        ll prefStrength = 0;
        ll bonus = 0;

        for(int i=0; i<n; i++)
            {
                bonus += diff[i];
                ll need = (ll)monsters[i] - bonus;

                if(need > 0) ans = max(ans, prefStrength + need);
                prefStrength += (ll)monsters[i];
            }
        return ans;
    }
};
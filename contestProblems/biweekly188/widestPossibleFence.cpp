#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    int maximumWidth(vector<int>& planks) 
    {
        int n = planks.size();
        
        unordered_map<ll,ll> mpp;
        for(auto a : planks) 
            mpp[a]++;

        unordered_map<ll,ll> width;

        // single plank
        for(auto it : mpp)
            {
                width[it.first] = it.second;
            }


        // pair sum height
        for(auto it1 : mpp)
            {
                for(auto it2 : mpp)
                    {
                        ll a = it1.first;
                        ll b = it2.first;

                        if(a > b) 
                            continue;

                        ll h = a + b;

                        if(a == b)
                            width[h] += mpp[a] / 2;
                        else
                            width[h] += min(mpp[a], mpp[b]);
                    }
            }


        int ans = 0;

        for(auto it : width)
            {
                ans = max(ans, (int)it.second);
            }

        return ans;
    }
};
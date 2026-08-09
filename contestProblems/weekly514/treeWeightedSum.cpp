#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    void heightCalc(vector<ll> &height, vector<vector<int>> &adj)
    {
        queue<int> q;
        q.push(0);
        height[0] = 1;

        while(!q.empty())
            {
                int node = q.front();
                q.pop();

                for(auto child : adj[node])
                    {
                        height[child] = height[node] + 1;
                        q.push(child);
                    }
            }
    }
    
    ll weightedSum(vector<int>& parent, vector<int>& nums) 
    {
        int n = parent.size();
        
        // all nodes height
        vector<ll> height(n);
        vector<vector<int>> adj(n);
        for(int i=1; i<n; i++) adj[parent[i]].push_back(i);
        heightCalc(height,adj);

        ll maxHeight = *max_element(height.begin(), height.end());
        ll sum = 0;
        for(int i=0; i<n; i++)
            {
                sum += nums[i] * (maxHeight - height[i] + 1);
            }
        return sum;
    }
};
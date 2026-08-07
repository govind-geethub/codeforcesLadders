#include <bits/stdc++.h>
using namespace std;

// dp[i] = max score from index i 
int solve(int i, int n, vector<int> &v, vector<int> &dp)
{
    if(dp[i] != -1) return dp[i];
    
    int best = 0;
    for(int j=i+1; j<n; j++)
    {
        int gain = v[j] - j + i;
        best = max(best, gain + solve(j,n,v,dp));
    }
    
    return dp[i] = best;
}

int jumpingCost(int n, vector<int> &v)
{
    vector<int> dp(n, -1);
    return solve(0,n,v,dp);
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << jumpingCost(n,v) << endl;
    }
    return 0;
}

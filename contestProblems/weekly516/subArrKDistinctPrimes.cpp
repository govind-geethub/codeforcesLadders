#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> getPrime(int n)
    {
        vector<int> factors;
        for(int i=2; i*i <= n; i++)
            {
                if(n % i == 0) 
                {
                    factors.push_back(i);
                    while(n % i == 0) n = n / i;
                }
            }
        if(n > 1) factors.push_back(n);
        return factors;
    }
    
    int longestSubarray(vector<int>& nums, int k) 
    {
        int n = nums.size();

        // primes of every number
        vector<vector<int>> fac(n);
        for(int i=0; i<n; i++) fac[i] = getPrime(nums[i]);

        unordered_map<int,int> mpp;
        int unique = 0;
        int l = 0, ans = INT_MIN;

        for(int r=0; r<n; r++)
            {
                for(int f : fac[r])
                    {
                        if(mpp[f] == 0) unique++;
                        mpp[f]++;
                    }

                // > k remove
                while(unique > k)
                    {
                        for(int f : fac[l])
                            {
                                mpp[f]--;
                                if(mpp[f] == 0) unique--;
                            }
                        l++;
                    }
                ans = max(ans, r - l + 1);
            }
        return ans;
    }
};
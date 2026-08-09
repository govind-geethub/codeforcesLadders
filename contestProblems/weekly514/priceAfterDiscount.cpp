#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) 
    {
        int n = prices.size(), m = discounts.size();
        double ans = 0.0;
        
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        int i = 0, j = 0;
        while(i < n && j < m)
            {
                double price = ((double)prices[i] * 
                                 (100 - (double)discounts[j])) / 100;
                ans += price;
                i++; j++;
            }
        while(i < n) 
            {
                ans += prices[i];
                i++;
            }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) 
    {
        unordered_set<int> st;
        for(int a : nums) st.insert(a);

        vector<int> temp;
        for(int i=lower; i<=upper; i++)
            {
                if(st.find(i) != st.end()) continue;
                temp.push_back(i);
            }

        vector<vector<int>> res;
        if(temp.empty()) return res;

        int start = temp[0], end = temp[0];
        for(int i=1; i<temp.size(); i++)
            {
                if(end + 1 == temp[i]) end = temp[i];
                else
                {
                    res.push_back({start, end});
                    start = temp[i];
                    end = temp[i];
                }
            }
        res.push_back({start, end});
        return res;
    }
};
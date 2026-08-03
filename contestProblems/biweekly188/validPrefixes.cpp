#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int countValidPrefixes(string s) 
    {
        int count0 = 0, count1 = 0;
        int ans = 0;
        for(char ch : s)
            {
                if(ch == '0') count0++;
                else count1++;

                int diff = abs(count1 - count0);
                if(diff == 1 || diff == 0) ans++;
            }
        return ans;
    }
};
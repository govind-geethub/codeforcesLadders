#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    
    bool checkPalindrome(string a)
    {
        int n = a.length();
        for(int i=0; i<n/2; i++) if(a[i] != a[n-1-i]) return false;
        return true;
    }
    
    string binary(int a)
    {
        if(a == 0) return "0";
        
        string ans = "";
        for(int i=0; i<8; i++)
            {
                ans += (a % 2) + '0';
                a = a / 2;
            }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    bool isPalindromic(string s) 
    {
        string ans = "";
        for(char ch : s)
            {
                int a = (int)ch;
                string b = binary(a);
                ans += b;
            }
        return checkPalindrome(ans) ? true : false;
    }
};
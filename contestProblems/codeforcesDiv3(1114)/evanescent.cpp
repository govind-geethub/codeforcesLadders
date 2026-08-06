#include<bits/stdc++.h>
using namespace std;

int evanescent(int n, string s)
{
    // original groups
    int grp=1;
    for(int i=1; i<n; i++)  if(s[i] != s[i-1]) grp++;

    int ans = grp;
    for(int i=1; i<n-1; i++)
    {
        int curr = grp;
        // case 1 : i j k -> i == k && j != i
        if(s[i-1] == s[i+1] && s[i-1] != s[i]) curr -= 2;

        // case 2 : a b c deleting b would make grp -= 1
        else if(s[i] != s[i-1] && s[i] != s[i+1]) curr -= 1;

        ans = min(ans, curr);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << evanescent(n,s) << endl;
    }
    return 0;
}
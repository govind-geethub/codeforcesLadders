#include <bits/stdc++.h>
using namespace std;
#define ll long long

string upDownPalindrome(ll n, vector<ll> &v)
{
    ll low = LLONG_MIN, high = LLONG_MAX;
    
    for(ll i=0; i<n/2; i++)
    {
        ll a = v[i];
        ll b = v[n-i-1];
        
        if(a == b) continue;
        ll diff = abs(a - b);
        
        if(diff == 1 || diff > 2) return "No";
        
        else if(diff == 2)
        {
            low = max(low, min(a,b));
            high = min(high, min(a,b) + 1);
        }
    }
    
    // intersection is there between the range of x
    if(low <= high) return "Yes";
    return "No";
}

int main() 
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << upDownPalindrome(n,v) << endl;
    }
    return 0;
}

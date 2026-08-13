#include <bits/stdc++.h>
using namespace std;

int chocolateGame(int n, vector<int> &v)
{
    int sum = 0;
    int oddCnt = 0;
    
    for(int i=0; i<n; i++)
    {
        sum += v[i];
        if(v[i] % 2) oddCnt++;
    }
    
    // Alice will take all the evens
    // (odd - 1)s then will go alternate so odd/2 
    if(sum % 2 == 0) return sum - oddCnt / 2;
    
    return oddCnt / 2;
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
        
        cout << chocolateGame(n,v) << endl;
    }
    return 0;
}

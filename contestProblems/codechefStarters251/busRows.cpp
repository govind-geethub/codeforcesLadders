#include <bits/stdc++.h>
using namespace std;

int busRow(int n, int m, int x)
{
    int row = (x + m - 1)/m;
    return min(row, n - row + 1);
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m,x;
        cin >> n >> m >> x;
        
        cout << busRow(n,m,x) << endl;
    }
    return 0;
}

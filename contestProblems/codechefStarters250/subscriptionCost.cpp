#include <bits/stdc++.h>
using namespace std;

int subscribeCost(int n, int x, int y)
{
    if(n <= 3) return n*x;
    
    int cost = 3*x;
    n -= 3;
    cost += (n*y);
    return cost;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        
        cout << subscribeCost(n,x,y) << endl;
    }
    return 0;
}

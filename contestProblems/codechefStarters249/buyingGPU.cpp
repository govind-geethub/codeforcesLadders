#include <bits/stdc++.h>
using namespace std;

int gpuBuy(int x, int y, int z)
{
    // won't reach that price ever
    if(z <= y) return -1;
    
    return (x+z-y-1)/(z-y);// ceiling division
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        cout << gpuBuy(x,y,z) << endl;
    }
    return 0;
}

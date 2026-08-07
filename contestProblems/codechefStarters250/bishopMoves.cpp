#include <bits/stdc++.h>
using namespace std;

// bishop moves in same parity
int bishopMoves(int x1, int y1, int x2, int y2)
{
    if(x1+y1 == x2+y2 || x1-y1 == x2-y2) return 1;
    
    if((x1+y1) % 2 != (x2+y2) % 2) return -1; // diff parity diagonals
    
    // always reach by 2 moves
    return 2;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        cout << bishopMoves(x1,y1,x2,y2) << endl;
    }
    return 0;
}

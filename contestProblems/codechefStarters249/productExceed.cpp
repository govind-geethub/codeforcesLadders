#include <bits/stdc++.h>
using namespace std;

int productExceed(int x, int y, int p)
{
    int count = 0;
    while(x*y < p)
    {
        if(x < y) 
        {
            count++;
            x++;
        }
        else
        {
            count++;
            y++;
        }
    }
    return count;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y,p;
        cin >> x >> y >> p;
        
        cout << productExceed(x,y,p) << endl;
    }
    return 0;
}

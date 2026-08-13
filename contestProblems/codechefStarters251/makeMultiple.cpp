#include <bits/stdc++.h>
using namespace std;

int makeMultiple(int n)
{
    if(n % 3 == 0) return 0;
    if((n+1) % 3 == 0) return 1;
    
    int temp = n;
    int rem = temp % 5;
    temp = temp + (5 - rem);
    if(temp % 3 == 0) return 1;
    
    return 2;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << makeMultiple(n) << endl;
    }
    return 0;
}

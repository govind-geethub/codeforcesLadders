#include <bits/stdc++.h>
using namespace std;

int presentation(int n)
{
    int Tsec = n * 30;
    int reqSec = 600 - Tsec;
    return reqSec/30;
}

int main() 
{
    int n;
    cin >> n;
    
    cout << presentation(n) << endl;
}

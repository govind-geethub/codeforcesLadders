#include<bits/stdc++.h>
using namespace std;
void xeniaAndRingroad(int n, int m, vector<int>&a)
{
    long long time = 0;
    int current = 1; // current house start
 
    for (int i = 0; i < m; i++) {
        if (a[i] >= current) 
        {
            time += a[i] - current;
        } else 
        {
            time += n - current + a[i];
        }
        current = a[i]; // current house now
    }
 
    cout << time << endl;
}
int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) 
    {
        cin >> a[i];
    }
    xeniaAndRingroad(n,m,a);
    return 0;
}
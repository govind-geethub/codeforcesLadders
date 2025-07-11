#include<bits/stdc++.h>
using namespace std;
int numberOfPositions(int n, int a, int b)
{
    int i;
    int count=0;
    for(i=1; i<=n; i++)
    {
        int count1=0;
        for(int j=1; j<i; j++) 
        {
            count1++;
        }
        // cout << count1 << endl;
        int count2=0;
        for(int k=i+1; k<=n; k++) 
        {
            count2++;
        }
        // cout << count2 << endl;

        if(count1>=a && count2<=b) count++;
    }
    return count;
}
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    cout << numberOfPositions(n,a,b) << endl;
    return 0;
}
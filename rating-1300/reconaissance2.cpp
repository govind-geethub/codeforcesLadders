#include<bits/stdc++.h>
using namespace std;
void reconaissance(int n, vector<int>&v)
{
    int index1=0, index2=0;
    int minDiff=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int next=(i+1)%n;
        int curMinDiff=abs(v[i]-v[next]);
        if(curMinDiff<minDiff)
        {
            minDiff=curMinDiff;
            index1=i+1;
            index2=next+1;
        }
    }
    cout << index1 << " " << index2 << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    reconaissance(n,v);
    return 0;
}
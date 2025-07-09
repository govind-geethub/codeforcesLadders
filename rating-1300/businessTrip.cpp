#include<bits/stdc++.h>
using namespace std;
int buisenessTrip(int k, vector<int>&month)
{
    int sum=0;
    if(k==0) return 0;
    sort(month.begin(), month.end(), greater<int>()); // descending so to get less elements for sum-k
    for(int i=0; i<12; i++)
    {
        sum+=month[i];
        if(sum>=k) return i+1;      // check for minimum height or greater
    }
    return -1;
}
int main()
{
    int k;
    cin >> k;
    vector<int>month(12);
    for(int i=0; i<12; i++)
    {
        cin >> month[i];
    }
    cout << buisenessTrip(k,month) << endl;
    return 0;
}
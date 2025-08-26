#include<bits/stdc++.h>
using namespace std;
int flippingGame(int n, vector<int>&v)
{
    int freq0=0, freq1=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0) freq0++;
        else freq1++;
    }

    if(freq0==1) return n;
    else if(freq0==0) return n-1;

    vector<int>zeroIndex;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0) zeroIndex.emplace_back(i);
    }

    int maxGain=0;
    for(int i=0; i<zeroIndex.size(); i++)
    {
        int count0=0, count1=0;
        for(int j=zeroIndex[i]; j<=zeroIndex[zeroIndex.size()-1]; j++)
        {
            if(v[j]==0) count0++;
            else count1++;
        }
        if(count0>count1)
        {
            int currGain=count0-count1;
            maxGain=max(currGain, maxGain);
        }
    }
    return freq1+maxGain;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    cout << flippingGame(n,v) << endl;
    return 0;
}
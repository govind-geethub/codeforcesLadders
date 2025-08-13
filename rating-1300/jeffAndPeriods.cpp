#include<bits/stdc++.h>
using namespace std;
void jeffAndPeriods(int n, vector<int>&v)
{
    int count = 0;
    unordered_set<int> unique;
    for (int i=0; i<n; i++) unique.insert(v[i]); // insert unique elements
 
    unordered_map<int,int> freq;
    for (int i=0; i<n; i++) freq[v[i]]++;        // frequency map
 
    vector<pair<int,int>> index(n);
    for (int i=0; i<n; i++)                      // index pair
    {
        index[i].first = v[i];
        index[i].second = i;
    }
 
    for (int i=0; i<n; i++)
    {
        if (freq[v[i]]==1) count++;          // counting elements of freq=1
    }
 
    vector<pair<int, int>> result;            // storing freq=1 elements
    for (int i=0; i<n; i++)
    {
        if (freq[v[i]]==1)
        {
            result.emplace_back(v[i],0);
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]]==1) unique.erase(v[i]);   // erasing the freq=1 elements
    }
 
    // storing positions of each element
    unordered_map<int,vector<int>>positions;
    for (int i=0; i<n; i++)
    {
        positions[v[i]].emplace_back(index[i].second);
    }
 
    vector<int> uniq(unique.begin(), unique.end());
    for (int i=0; i<uniq.size(); i++)
    {
        vector<int>vPair=positions[uniq[i]];
        int a = 0;
        for (int k = 0; k + 2 < vPair.size(); k++)
        {
            if (vPair[k+1]-vPair[k]==vPair[k+2]-vPair[k+1]) a++;
        }
        if (vPair.size()>1 && a==vPair.size() - 2)
        {
            count++;
            result.emplace_back(uniq[i],vPair[1]-vPair[0]);
        }
    }
 
    sort(result.begin(), result.end());
    cout << count << endl;
    for (int i=0; i<result.size(); i++) cout << result[i].first << " " << result[i].second << endl;
}
 
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    jeffAndPeriods(n, v);
    return 0;
}
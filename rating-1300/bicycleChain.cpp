#include<bits/stdc++.h>
using namespace std;
int bicycleChain(int n, vector<int>&a, int m, vector<int>&b)
{
    int maxi=0, currMaxi=0;
    unordered_map<int,int>freq;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(b[j]%a[i]==0)
            {
                currMaxi=b[j]/a[i];
                freq[currMaxi]++;                   // if maxi is incremented then we can get wrong ratio freq.
                maxi=max(maxi,currMaxi);            // take e.g. (2) and (4,6,4)
            }
        }
    }
    int c=freq[maxi];
    return c;
}
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int>b(m);
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    cout << bicycleChain(n,a,m,b) << endl;
    return 0;
}
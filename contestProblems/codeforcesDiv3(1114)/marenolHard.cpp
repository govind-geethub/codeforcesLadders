#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll marenolHard(int n, string a, string b)
{
    vector<int> evenA, evenB;
    vector<int> oddA, oddB;

    int evenPos = 0, oddPos = 0;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            if(a[i] == '1') evenA.push_back(evenPos);
            if(b[i] == '1') evenB.push_back(evenPos);
            evenPos++;
        }
        else
        {
            if(a[i] == '1') oddA.push_back(oddPos);
            if(b[i] == '1') oddB.push_back(oddPos);
            oddPos++;
        }
    }

    if(evenA.size() != evenB.size() || oddA.size() != oddB.size()) return -1;

    ll ans = 0;
    for(int i=0; i<evenA.size(); i++)   ans += abs(evenA[i] - evenB[i]);
    for(int i=0; i<oddA.size(); i++)    ans += abs(oddA[i] - oddB[i]);

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;

        string b;
        cin >> b;

        cout << marenolHard(n,a,b) << endl;
    }
    return 0;
}
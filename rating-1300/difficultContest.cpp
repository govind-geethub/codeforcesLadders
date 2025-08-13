#include<bits/stdc++.h>
using namespace std;
string difficultContest(string a)
{
    sort(a.begin(), a.end(), greater<char>());
    return a;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string a;
        cin >> a;
        cout << difficultContest(a) << endl;
    }
    return 0;
}
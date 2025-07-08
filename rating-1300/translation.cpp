#include<bits/stdc++.h>
using namespace std;
void translation(string s, string t)
{
    int n=s.size(), m=t.size();
    if(n==m)
    {
        for(int i=0; i<n; i++)
        {
            if(t[i]!=s[n-i-1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
int main()
{
    string s,t;
    cin >> s >> t;
    translation(s,t);
    return 0;
}
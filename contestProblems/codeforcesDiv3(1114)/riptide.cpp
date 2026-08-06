#include<bits/stdc++.h>
using namespace std;

int riptide(int a, int b, int c)
{
    int count = 0;
    while(a != b && b != c && c != a)
    {
        vector<int> temp = {a,b,c};
        sort(temp.begin(), temp.end());
        temp[0]++;
        temp[2]--;

        a = temp[0];
        b = temp[1];
        c = temp[2];

        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        cout << riptide(a,b,c) << endl;
    }
    return 0;
}
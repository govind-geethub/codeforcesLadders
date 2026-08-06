#include<bits/stdc++.h>
using namespace std;

string marenol(int n, string a, string b)
{
    int count1a = 0, count0a = 0;
    int count1b = 0, count0b = 0;
    for(char ch : a) 
    {
        if(ch = '1') count1a++;
        else count0a++;
    }

    for(char ch : b) 
    {
        if(ch = '1') count1b++;
        else count0b++;
    }

    if(count1a != count1b || count0a != count0b) return "NO";

    // 0s and 1s are in the same parity always
    // switching only 2 positions left/right
    int even1 = 0, even2 = 0;
    int odd1 = 0, odd2 = 0;

    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            if(a[i] == '1') even1++;
            if(b[i] == '1') even2++;
        }
        else
        {
            if(a[i] == '0') odd1++;
            if(b[i] == '0') odd2++;
        }
    }

    if(even1 == even2 && odd1 == odd2) return "YES";
    return "NO";
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

        cout << marenol(n,a,b) << endl;
    }
    return 0;
}
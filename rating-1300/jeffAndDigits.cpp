#include <bits/stdc++.h>
using namespace std;

string jeffAndDigits(int n, vector<int>& v)
{
    string num="";
    int sum=0, count0=0, count5=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=0) 
        {
            sum+=v[i];
            count5++;
        }
        else count0++;
    }
    if(count0<1) return "-1";
    sort(v.begin(), v.end(), greater<int>());
    
    int count55=0;
    while(sum%9!=0)
    {
        sum-=5;
        count55++;
    }
    v.erase(v.begin(), v.begin()+count55);
    if(v[0]==0) return "0";
    for(int i=0; i<n-count55; i++)
    {
        num+=to_string(v[i]);
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << jeffAndDigits(n, v) << endl;
    return 0;
}

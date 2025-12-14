#include<bits/stdc++.h>
using namespace std;
void xeniaDiv(int n, vector<int>&v)
{
    // since nums are 1 to 7 so only handful combinations
    // 1 2 4
    // 1 3 6
    // 1 2 6
    int c1=0, c2=0, c3=0, c4=0, c6=0, c=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1) c1++;
        else if(v[i]==2) c2++;
        else if(v[i]==3) c3++;
        else if(v[i]==4) c4++;
        else if(v[i]==6) c6++;
        else c++;
    }
    if(c!=0)    // no combination with 5 7
    {
        cout << "-1" << endl;
        return;
    }

    if(c1!=n/3)     // 1 is req in every combination so n/3 always
    {
        cout << "-1" << endl;
        return;
    }

    if(c3>c6 || c4>c2)      // if more then no more combination possible
    {
        cout << "-1" << endl;
        return;
    }

    int rem2=c2-c4;     // 2s are more as for 4 6
    int rem6=c6-c3;     // 6s are more as for 2 3

    if(rem2!=rem6)
    {
        cout << "-1" << endl;
        return;
    }

    for(int i=0; i<c4; i++) cout << "1 2 4" << endl;
    for(int i=0; i<c3; i++) cout << "1 3 6" << endl;
    for(int i=0; i<rem2; i++) cout << "1 2 6" << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    xeniaDiv(n,v);
    return 0;
}
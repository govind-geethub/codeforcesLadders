#include<bits/stdc++.h>
using namespace std;
void dragons(int kirito, int str, vector<pair<int,int>>&strength)
{
    sort(strength.begin(), strength.end());
    for(int i=0; i<str; i++)
    {
        if(kirito<=strength[i].first)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            kirito+=strength[i].second;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int kirito, str;
    cin >> kirito >> str;
    vector<pair<int,int>>strength;
    for(int i=0; i<str; i++)
    {
        int dragon, bonus;
        cin >> dragon >> bonus;
        strength.emplace_back(dragon,bonus);
    }
    dragons(kirito, str, strength);
    return 0;
}
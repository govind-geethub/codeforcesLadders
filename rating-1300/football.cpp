#include<bits/stdc++.h>
using namespace std;
void football(int n, vector<string>&team)
{
    unordered_map<string,int>name;
    for(int i=0; i<n; i++)
    {
        name[team[i]]++;
    }
    string a=team[0];
    string b="";
    for(int i=0; i<n; i++)
    {
        if(team[i]!=a)
        {
            b=team[i];
            break;
        }
    }
    if(name[a]>name[b]) cout << a << endl;
    else cout << b << endl;

}
int main()
{
    int n;
    cin >> n;
    vector<string>team(n);
    for(int i=0; i<n; i++)
    {
        cin >> team[i];
    }
    football(n,team);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void football(int n, vector<string>&team)
{
    unordered_map<string,int>name;
    for(int i=0; i<n; i++)
    {
        name[team[i]]++;        // no. of goals of the 2 teams
    }
    string a=team[0];           // this will be 1st team
    string b="";            
    for(int i=0; i<n; i++)
    {
        if(team[i]!=a)
        {
            b=team[i];          // this is 2nd
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
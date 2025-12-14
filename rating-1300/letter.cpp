#include<bits/stdc++.h>
using namespace std;
void letter(string s1, string s2)
{
    unordered_map<char,int> head, text;
    for(char p:s1)  
    {
        if(p!=' ')head[p]++;
    }

    for(char q:s2)  
    {
        if(q!=' ')text[q]++;
    }

    for(auto i:text)
    {
        int req=i.second;
        char q=i.first;
        if(req>head[q])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    letter(s1,s2);
    return 0;
}
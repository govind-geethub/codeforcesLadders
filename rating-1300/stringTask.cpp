#include<bits/stdc++.h>
using namespace std;
void stringTask(string s)
{
    string rem=".";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]+=32;
                rem+=s[i];
                rem+='.';
            }
            else
            {
                rem+=s[i];
                rem+='.';
            }
        }
    }
    for(int i=0; i<rem.size()-1; i++)
    {
        cout << rem[i];
    }
}
int main()
    {
        string s;
        cin >> s;
        stringTask(s);
        return 0;
    }
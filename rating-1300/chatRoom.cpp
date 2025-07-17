#include<bits/stdc++.h>
using namespace std;
void chatRoom(string s)
{
    int n=s.size();
    int index1=0, index2=0, index3=0, index4=0, index5=0;
    vector<int>v(5);
    for(int i=0; i<n; i++)
    {
        if(s[i]=='h')
        {
            index1=i;
            break;
        }
    }

    for(int i=index1+1; i<n; i++)
    {
        if(s[i]=='e')
        {
                index2=i;
                break;
        }
    }

    for(int i=index2+1; i<n; i++)
    {
        if(s[i]=='l')
        {
                index3=i;
                break;
        }
    }

    for(int i=index3+1; i<n; i++)
    {
        if(s[i]=='l')
        {
                index4=i;
                break;
        }
    }

    for(int i=index4+1; i<n; i++)
    {
        if(s[i]=='o')
        {
                index5=i;
                break;
        }
    }
    if(index5>index4 && index4>index3 && index3>index2 && index2>index1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    string s;
    cin >> s;
    chatRoom(s);
    return 0;
}
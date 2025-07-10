#include<bits/stdc++.h>
using namespace std;
void kString(int k, string s)
{
    unordered_map<char,int>freq;
    for(char c:s) freq[c]++;
    string part="";         // empty string to store the repeating part
    for(auto it : freq)
    {
        char c=it.first;
        int count=it.second;
        if(count % k!=0)            //check that count is divisible or not to have kstring
        {
            cout << "-1" << endl;
            return;
        }
        part+=string(count/k,c);       // creating the reapeating part e.g. aazz so part=(az) or (za)
    }
    string result="";
    for(int i=0; i<k; i++) cout << part;
    cout << endl;
}
int main()
{
    int k;
    string s;
    cin >> k >> s;
    kString(k,s);
    return 0;
}
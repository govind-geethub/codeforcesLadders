#include<bits/stdc++.h>
using namespace std;
int petrAndBook(int totalPages, vector<int>&v)
{
    int sum=0;
    while(true)
    {
        for(int i=0; i<7; i++)
        {
            sum+=v[i];
            if(sum>=totalPages) return i+1;
        }
    }
}
int main()
{
    int totalPages;
    cin >> totalPages;
    vector<int>v(7);
    for(int i=0; i<7; i++)
    {
        cin >> v[i];
    }
    cout << petrAndBook(totalPages,v) << endl;
    return 0;
}
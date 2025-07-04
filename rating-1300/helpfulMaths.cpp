#include<bits/stdc++.h>
using namespace std;
void helpfulMaths(string sum)
{
    int n=sum.size();
    if(n==1) 
    {
        cout << sum << endl;
        return;
    }
    vector<int>v((n/2)+1);
    for(int i=0; i<n; i+=2)
    {
        v[i/2]=sum[i];
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i+=2)
    {
        sum[i]=v[i/2];
    }
    
    for(int i=0; i<n; i++)
    {
        cout << sum[i];
    }
}
int main()
{
    string sum;
    cin >> sum;
    helpfulMaths(sum);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int puzzle(int m, int n, vector<int>&v)
{
    sort(v.begin(), v.end());
    /*for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }*/
    int i=0;
    int currMinDiff=INT_MAX;
    int minDiff=v[i+m-1]-v[i];
    //cout << v[i+m-1] << " " << v[i] << endl;
    //cout << minDiff << endl;
    i++;
    while(i+m-1<n)
    {
        currMinDiff=v[i+m-1]-v[i];
        //cout << currMinDiff << endl;
        minDiff=min(currMinDiff, minDiff);
        //cout << minDiff << endl;
        i++;
    }
    return minDiff;
}
int main()
{
    int student, n;
    cin >> student >> n;
    vector<int>piece(n);
    for(int i=0; i<n; i++)
    {
        cin >> piece[i];
    }
    cout << puzzle(student, n, piece) << endl;
    return 0;
}
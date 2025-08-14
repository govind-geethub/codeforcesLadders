#include<bits/stdc++.h>
using namespace std;
int showerLine(vector<vector<int>>&v)
{
    int curHappiness, happiness=0;
    vector<int>a={0,1,2,3,4};
    for(int i=0; i<120; i++)
    {
        curHappiness=0;
        curHappiness+=(v[a[0]][a[1]] + v[a[1]][a[0]] + v[a[2]][a[3]] +v[a[3]][a[2]] + v[a[1]][a[2]] + v[a[2]][a[1]] +v[a[3]][a[4]] + v[a[4]][a[3]] + v[a[2]][a[3]] +v[a[3]][a[2]] +  v[a[3]][a[4]] + v[a[4]][a[3]]);
        happiness=max(curHappiness, happiness);
        next_permutation(a.begin(), a.end());
    }
    return happiness;
}
int main()
{
    vector<vector<int>>matrix(5, vector<int>(5));
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << showerLine(matrix) << endl;
    return 0;
}
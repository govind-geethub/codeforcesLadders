#include<bits/stdc++.h>
using namespace std;
void lightsOut(vector<vector<int>> &v)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int toggles=0;
            toggles+=v[i][j];
            if(i>0) toggles+=v[i-1][j];
            if(i<2)  toggles+=v[i+1][j];
            if(j>0) toggles+=v[i][j-1];
            if(j<2)  toggles+=v[i][j+1];

            if(toggles%2==0) cout << "1" << " ";
            else cout << "0" << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>>v(3,vector<int>(3));
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << endl;
    lightsOut(v);
    return 0;
}
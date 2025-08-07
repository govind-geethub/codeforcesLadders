#include<bits/stdc++.h>
using namespace std;
void IQTest(char grid[4][4])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int count=0;
            if(grid[i][j]=='#') count++;
            if(grid[i+1][j]=='#') count++;
            if(grid[i][j+1]=='#') count++;
            if(grid[i+1][j+1]=='#') count++;

            if(count>=3 || count<=1)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    char grid[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> grid[i][j];
        }
    }
    IQTest(grid);
    return 0;
}

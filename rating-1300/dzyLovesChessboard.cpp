#include<bits/stdc++.h>
using namespace std;
void dzyLovesChessboard(int n, int m, vector<vector<char>>&v)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]=='.')
            {
                if((i+j)%2==0) v[i][j]='B';     // in matrix i+j = even has B otherwise W
                else v[i][j]='W';               // vice versa
            }
        }
    }

    // print the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>>chessBoard(n, vector<char>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m; j++)
        {
            cin >> chessBoard[i][j];
        }
    }
    dzyLovesChessboard(n, m, chessBoard);
    return 0;
}
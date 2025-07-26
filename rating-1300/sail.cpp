#include<bits/stdc++.h>
using namespace std;
int sail(int n, int sx, int sy, int ex, int ey, string s)
{
    int countE=0, countW=0, countN=0, countS=0;
    int indexE=0, indexN=0, indexS=0, indexW=0;
    int a=ex-sx;
    int b=ey-sy;
    if(a==0 && b==0) 
    {
        return 0;
    }
    if(a>0)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='E')
            {
                countE++;
                indexE=i+1;
                if(countE==a) break;
            }
        }
        if(countE!=a) return -1;
    }

    if(a<0)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='W')
            {
                countW++;
                indexW=i+1;
                if(countW==abs(a)) break;
            }
        }
        if(countW!=abs(a)) return -1;
    }
    int index1=max(indexE, indexW);

    if(b>0)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='N')
            {
                countN++;
                indexN=i+1;
                if(countN==b) break;
            }
        }
        if(countN!=b) return -1;
    }

    if(b<0)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='S')
            {
                countS++;
                indexS=i+1;
                if(countS==abs(b)) break;
            }
        }
        if(countS!=abs(b)) return -1;
    }

    int index2=max(indexN, indexS);
    return max(index1, index2);
}
int main()
{
    int time,sx,sy,ex,ey;
    cin >> time >> sx >> sy >> ex >> ey;
    string directions;
    cin >> directions;
    cout << sail(time, sx, sy, ex, ey, directions) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void panoramixPrediction(int n, int m)
{
    while(true)
    {
        int num=n+1;
        int factor=0;
        for(int i=1; i<=num/2; i++)
        {
            if(num%i==0) factor++;
        }

        if(factor==1)
        {
            if(num==m)
            {
                cout << "YES" << endl;
                return;
            }
            else 
            {
                cout << "NO" << endl;
                return;
            }
        }
        n++;
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    panoramixPrediction(n,m);
    return 0;
}
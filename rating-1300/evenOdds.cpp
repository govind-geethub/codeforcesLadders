#include<bits/stdc++.h>
using namespace std;
long long evenOdds(long long n, long long m)
{
    if(n%2==0)
    {
        if(n/2>=m) return 2*m-1;
        else return ((abs(n/2-m))*2);
    }
    else if(n%2==1)
    {
        if((n+1)/2>=m) return 2*m-1;
        else return (abs((n+1)/2-m))*2;
    }return -1;
}
int main()
{
    long long n,m;
    cin >> n >> m;
    cout << evenOdds(n,m) << endl;
    return 0;
}
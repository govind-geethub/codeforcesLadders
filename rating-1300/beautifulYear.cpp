#include<bits/stdc++.h>
using namespace std;
int beautifulYear(int year)
{
    while(true)
    {
        unordered_set<int>digits;
        year++;
        int newYear=year;
        int x;
        for(int i=0; i<4; i++)
        {
            x=newYear%10;
            digits.insert(x);
            newYear/=10;
        }
        if(digits.size()==4) return year;
    }
}
int main()
{
    int year;
    cin >> year;
    cout << beautifulYear(year) << endl;
    return 0;
}
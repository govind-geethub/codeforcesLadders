#include<bits/stdc++.h>
using namespace std;
void football52(string num)
{
    int n=num.size();
    int count=1;
    for(int i=0; i<n-1; i++)
    {
        if(num[i]==num[i+1])
        {
            count++;
            if(count>=7)
            {
                cout << "YES" << endl;
                return;
            }
        }
        else count=1;
    }
    cout << "NO" << endl;
}
int main()
{
    string num;
    cin >> num;
    football52(num);
    return 0;
}
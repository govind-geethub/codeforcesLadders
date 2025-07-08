#include<bits/stdc++.h>
using namespace std;
 
void magicNumber(string num)
{
    int n = num.size();
    int i = 0;
 
    while(i < n)
    {
        if(num[i] == '1')
        {
            if(i+2 < n && num[i+1] == '4' && num[i+2] == '4') // check "144" first
            {
                i += 3;
            }
            else if(i+1 < n && num[i+1] == '4') // then check "14"
            {
                i += 2;
            }
            else // then just "1"
            {
                i += 1;
            }
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main()
{
    string num;
    cin >> num;
    magicNumber(num);
    return 0;
}
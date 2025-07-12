#include<bits/stdc++.h>
using namespace std;
void queueAtSchool(int n, int t, string num)
{
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(num[i]=='B' && num[i+1]=='G')
            {
                swap(num[i],num[i+1]);
                i++;
            }
        }
    }
    cout << num << endl;
}
int main()
{
    int n,t;
    cin >> n >> t;
    string num;
    cin >> num;
    queueAtSchool(n,t,num);
    return 0;
}
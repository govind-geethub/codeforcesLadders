#include<bits/stdc++.h>
using namespace std;
void airport(int m, int n, vector<int>&v)
{
    int minPrice=0, maxPrice=0;
    int maxSeat=0, minSeat=0, currMax=0, currMin=0;
     vector<int>c(n);
     for(int i=0; i<n; i++)
     {
         c[i]=v[i];
     }
     // maxPrice
     while(true)
     {
         currMax=*max_element(v.begin(), v.end());
         maxPrice+=currMax;
         maxSeat++;
         if(maxSeat==m) break;
         for(int i=0; i<n; i++)
         {
             if(v[i]==currMax)
             {
                 v[i]-=1;
                 break;
             }
         }
     }

     // minPrice
     sort(c.begin(), c.end());  // new vector is taken as origianl is changed for maxPrice.
     for(int i=0; i<n; i++)
     {
         // cout << v[i] << endl;
         while(c[i]!=0)
         {
             minPrice+=c[i];
             // cout << minPrice << endl;
             minSeat++;
             if(minSeat==m) break;
             c[i]--;
         }
         if(minSeat==m) break;
     }

     cout << maxPrice << " " << minPrice << endl;
}
int main()
{
    int m,n;
    cin >> m >> n;
    vector<int>plane(n);
    for(int i=0; i<n; i++)
    {
        cin >> plane[i];
    }
    airport(m,n,plane);
    return 0;
}
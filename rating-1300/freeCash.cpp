#include <bits/stdc++.h>
using namespace std;

int freeCash(int n, vector<pair<int,int>>& v) {
    int maxCount = 1;
    int currCount = 1;

    for (int i = 0; i+1 < n; i++) {
        if (v[i] == v[i+1]) currCount++;
        else currCount = 1;
        maxCount = max(maxCount, currCount);
    }

    return maxCount;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    cout << freeCash(n, v) << endl;
    return 0;
}

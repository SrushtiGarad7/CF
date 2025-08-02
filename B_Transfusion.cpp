// Author: Srushti Garad
// SY CSE
// Walchand College Of Engineering, Sangli

#include <bits/stdc++.h>
using namespace std;

#define Fighter main
#define ll long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll oddSum = 0, evenSum = 0, oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            if (i % 2 == 0) {
                evenSum += x;
                evenCount++;
            } else {
                oddSum += x;
                oddCount++;
            }
        }

        double oddAvg = (double)oddSum / oddCount;
        double evenAvg = (double)evenSum / evenCount;

        if (oddAvg == evenAvg && oddSum % oddCount == 0 && evenSum % evenCount == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int Fighter() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

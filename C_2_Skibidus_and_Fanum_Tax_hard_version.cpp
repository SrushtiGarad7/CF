// Author: Srushti Garad
// SY CSE
// Walchand College Of Engineering, Sangli

#include <bits/stdc++.h>
using namespace std;

#define Fighter main
#define Srushti ios_base::sync_with_stdio(false);
#define Garad cin.tie(NULL);
#define ll long long
#define vi vector<int>
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() { 
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vi a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        // Get the largest value in b (max bj)
        int b_max = *max_element(b.begin(), b.end());

        // Try sorting a using operations
        ll prev = min(a[0], b_max - a[0]);
        bool possible = true;

        for (int i = 1; i < n; i++) {
            ll option1 = a[i];
            ll option2 = b_max - a[i];

            ll new_val = LLONG_MAX;
            if (option1 >= prev) new_val = min(new_val, option1);
            if (option2 >= prev) new_val = min(new_val, option2);

            if (new_val == LLONG_MAX) {
                possible = false;
                break;
            }
            prev = new_val;
        }

        if (possible) yes;
        else no;
    }
}

int Fighter() {
    Srushti Garad;
    solve();
    return 0;
}

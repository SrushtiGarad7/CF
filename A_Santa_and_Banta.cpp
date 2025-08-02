#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long p;
        cin >> n >> p;

        vector<long long> doors(n);
        for (int i = 0; i < n; ++i) {
            cin >> doors[i];
        }

        long long min_steps = abs(p);
        for (int i = 0; i < n; ++i) {
            min_steps = min(min_steps, abs(doors[i]) + abs(doors[i] - p));
        }

        cout << min_steps << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
    if (a % b == 0)
        cout << 0 << '\n';
    else
        cout << b - (a % b) << '\n';
    }
    return 0;
}

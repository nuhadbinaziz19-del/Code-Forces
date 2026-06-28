#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        long long w = abs(x1 - x2) + 1;
        long long h = abs(y1 - y2) + 1;
        long long ways = (n - w + 1) * (m - h + 1);
        long long melt = ways * 2;
        long long overlap = 0;
        if ((n - w + 1) >= w && (m - h + 1) >= h) {
            overlap = ((n - w + 1) - w + 1) *((m - h + 1) - h + 1);
        }
        cout << n * m - (melt - overlap) << "\n";
    }
    return 0;
}

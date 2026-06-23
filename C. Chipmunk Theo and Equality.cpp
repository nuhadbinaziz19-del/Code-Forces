#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unordered_map<long long, long long> cost;
        unordered_map<long long, int> cnt;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            unordered_map<long long, int> vis;
        long long cur = x;
        int d = 0;
        while (true) {
        if (!vis.count(cur)) {
        vis[cur] = d;
        }
        if (cur == 1) break;
        if (cur & 1) {
        cur++;
        }
        else {
        cur /= 2;
        }
        d++;
        }
        if (!vis.count(2))
        vis[2] = d + 1;
        for (auto &[v, c] : vis) {
        cnt[v]++;
        cost[v] += c;
        }
        }
        long long ans = LLONG_MAX;
        for (auto &[v, c] : cnt) {
        if (c == n)
        ans = min(ans, cost[v]);
        }
        cout << ans << '\n';
    }
    return 0;
}

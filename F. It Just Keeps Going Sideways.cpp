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
    vector<int> a(n + 1);
    vector<long long> cnt(n + 2, 0);
    vector<long long> diff(n + 3, 0);
    for (int i = 1; i <= n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
    diff[1]++;
    diff[a[i] + 1]--;
    }
    vector<long long> c(n + 2, 0);
    for (int h = 1; h <= n; h++) {c[h] = c[h - 1] + diff[h];}
    vector<long long> posSum(n + 2, 0);
    for (int i = 1; i <= n; i++) {posSum[a[i]] += i;}
    for (int h = n; h >= 1; h--) {posSum[h] += posSum[h + 1];}
    long long ans = 0;
    for (int h = 1; h <= n; h++) {
    long long k = c[h];
    long long finalSum =k * (2LL * n - k + 1) / 2;
    ans += finalSum - posSum[h];
    }
    long long bestGain = 0;
    for (int i = 1; i <= n; i++) {
    long long gain = i + c[a[i]] - n - 1;
    bestGain = max(bestGain, gain);
    }
    cout << ans + bestGain << '\n';
    }
    return 0;
}

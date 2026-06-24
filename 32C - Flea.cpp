#include <iostream>
using namespace std;

int main() {
    long long n, m, s;
    cin >> n >> m >> s;
    long long qn = n / s;
    long long rn = n % s;
    long long qm = m / s;
    long long rm = m % s;
    long long rows, cols;
    if (rn == 0)
        rows = n;
    else
        rows = rn * (qn + 1);
    if (rm == 0)
        cols = m;
    else
        cols = rm * (qm + 1);
    cout << rows * cols << endl;
    return 0;
}

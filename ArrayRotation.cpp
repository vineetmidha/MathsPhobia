
// https://www.codechef.com/LTIME95C/problems/ARRROT

#include <iostream>
using namespace std;

#define int long long
const int mod = 1e9+7;

void solve(int test=0)
{
    int n; cin >> n;

    int sum = 0;
    while (n--) {
        int x; cin >> x;
        sum = (sum + x + mod) % mod;
    }

    int q; cin >> q;

    while (q--) {
        int x; cin >> x;
        sum = (2 * sum) % mod;
        cout << sum << "\n";
    }
}

signed main() {
	solve();
	return 0;
}


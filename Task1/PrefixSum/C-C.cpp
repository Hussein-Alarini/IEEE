// بسم الله الرحمن الرحيم 
// Hussein El-sayed Alarini
#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define ln "\n"
#define vi vector<int>
#define Flash ios_base::sync_with_stdio(false); cin.tie(nullptr);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec){for (auto& i : vec) is >> i; return is;}

int solve() {
    int n, q;
    cin >> n >> q;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    vi pre1(n + 1, 0), pre2(n + 1, 0), pre3(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pre1[i] = pre1[i-1] + (arr[i] == 1);
        pre2[i] = pre2[i-1] + (arr[i] == 2);
        pre3[i] = pre3[i-1] + (arr[i] == 3);
    }

    while (q--) {
        int x, y;
        cin >> x >> y;
        int count1 = pre1[y] - pre1[x-1];
        int count2 = pre2[y] - pre2[x-1];
        int count3 = pre3[y] - pre3[x-1];
        cout << count1 << " " << count2 << " " << count3 << ln;
    }
    return 0;
}

signed main() {
    Flash
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    solve();
    bye;
}

// بسم الله الرحمن الرحيم 
// Hussein El-sayed Alarini
#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define sp    " "
#define ln    "\n"
#define vi vector<int>
#define se set<int>
#define us unordered_set<int>
#define ll long long
#define ump unordered_map<int,int>
#define mp map<int,int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Flash ios_base::sync_with_stdio(false); cin.tie(nullptr);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec){for (auto& i : vec) is >> i; return is;}
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec){for (auto& i : vec) os << i << ' '; return os;}

int solve()
{
    int x, n;
    cin >> x >> n;

    vi w(n + 1);
    for (int i = 1; i <= n; i++) cin >> w[i];

    int q;
    cin >> q;

    se s;
    int wt = x;

    for (int i = 0; i < q; i++) {
        int p;
        cin >> p;

        if (s.count(p)) {
            wt -= w[p];
            s.erase(p);
        } else {
            wt += w[p];
            s.insert(p);
        }

        cout << wt << ln;
    }

    return 0;
}


signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases = 1; //cin >> testCases;
    while(testCases--) solve();
    bye ;
}

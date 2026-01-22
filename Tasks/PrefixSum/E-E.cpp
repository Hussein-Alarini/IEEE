// بسم الله الرحمن الرحيم 
// Hussein El-sayed Alarini
#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define sp    " "
#define ln    "\n"
#define vi vector<int>
#define vil vector<long long>
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

long long gcd(long long a, long long b) {
    while(b) { long long t = b; b = a % b; a = t; }
    return a;
}

int solve() {
    int n; cin >> n;
    vil A(n + 2); 
    for(int i = 1; i <= n; i++) cin >> A[i];
    vil pri(n + 2), suf(n + 2);pri[0]=0;suf[n+1]=0;
    for(int i = 1; i <= n; i++)pri[i] = gcd(pri[i-1], A[i]);
    for(int i = n; i >= 1; i--)suf[i] = gcd(suf[i+1], A[i]);
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll gcdd = gcd(pri[i-1], suf[i+1]);
        ans = max(ans, gcdd);
    }
    cout << ans << ln;
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

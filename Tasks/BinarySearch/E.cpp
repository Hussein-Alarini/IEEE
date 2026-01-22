//                                   بسم الله الرحمن الرحيم 
//                       One day, I will achieve my dream, In Sha2 Allah

#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define sp    " "
#define ln    "\n"
#define no cout<<"No"<<ln;
#define yes cout<<"Yes"<<ln;
#define pii pair <int,int>
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
    ll n, m; cin >> n >> m;
    vi a(n), b(m); cin >> a; cin >> b;
    ll ans = 0;
    for(ll i : a) 
    {
        auto H = lower_bound(all(b), i);
        ll sh = LLONG_MAX;
        if(H != b.end()) 
            sh = min(sh, abs(i - b[H - b.begin()]));
        if(H != b.begin()) 
            sh = min(sh, abs(i - b[(H - b.begin()) - 1]));
        ans = max(ans, sh);
    }
    cout << ans << ln;
    bye;
}
// وقتين 21/1/ 2026
signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases = 1; //cin >> testCases;
    while(testCases--) solve();
    bye;
}
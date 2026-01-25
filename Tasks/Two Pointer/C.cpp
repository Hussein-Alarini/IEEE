//                                   بسم الله الرحمن الرحيم 
//                       One day, I will achieve my dream, In Sha2 Allah

#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define sp    " "
#define ln    "\n"
#define no cout<<"NO"<<ln;
#define yes cout<<"YES"<<ln;
#define pii pair <int,int>
#define vi vector<int>
#define se set<int>
#define us unordered_set<int>
#define ll long long
#define mp map<int,int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Flash ios_base::sync_with_stdio(false); cin.tie(nullptr);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec){for (auto& i : vec) is >> i; return is;}
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec){for (auto& i : vec) os << i << ' '; return os;}

void solve() {
    int n, k;cin >> n >> k;vi a(n);cin >> a;
    vi sh(n + 1, 0);for (int val : a) sh[val]++;

    bool H = true;
    for (int val = 1; val <= n; val++) 
    {
        if (sh[val] % k != 0) 
        {
            H = false;
            break;
        }
    }
    
    if (!H) 
    {
        cout << 0 << ln;
        return;
    }
    
    vi x(n + 1, 0);
    for (int val = 1; val <= n; val++) x[val] = sh[val] / k;

    vi cnt(n + 1, 0);
    ll ans = 0;

    int r = 0;
    for (int l = 0; l < n; l++) 
    {
        if (r < l) r = l;
        while (r < n && cnt[a[r]] + 1 <= x[a[r]]) 
        {
            cnt[a[r]]++;
            r++;
        }
        ans += (r - l);
        cnt[a[l]]--;
    }
    cout << ans << ln;
}

signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases = 1;
    cin >> testCases;
    while(testCases--) solve();
    bye;
}
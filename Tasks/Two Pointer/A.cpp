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

int solve() {
    int n;ll t;cin >> n >> t;vi books(n);cin >> books;
    ll sh = 0;
    int l = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) 
    {
        sh += books[i];
        while (sh > t && l <= i) 
        {
            sh -= books[l];
            l++;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << ln;
    bye;
}

signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases = 1; //cin >> testCases;
    while(testCases--) solve();
    bye;
}
/*
        ====================
              وقتتين
            إن شاء الله 
              9 / 2027
        ====================
*/
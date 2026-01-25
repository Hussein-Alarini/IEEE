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
    int n;cin >> n;vi w(n);cin >> w;
    int l = 0, r = n - 1;
    ll s1 = 0, s2 = 0;
    int ans = 0;
    while (l <= r) 
    {
        if (s1 <= s2) 
        {
            s1 += w[l];
            l++;
        } 
        else 
        {
            s2 += w[r];
            r--;
        }
        if (s1 == s2) ans = l + (n - 1 - r);
    }
    cout << ans << ln;
    bye;
}

signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases = 1;
    cin >> testCases;  // إزالة التعليق هنا
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
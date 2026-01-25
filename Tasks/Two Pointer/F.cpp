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
    int n;ll x;cin >> n >> x;vi arr(n);cin >> arr;
    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; i++) v[i] = {arr[i], i};
    sort(all(v));

    int l = 0, r = n - 1;
    while (l < r) {
        ll sum = v[l].first + v[r].first;
        if (sum == x) 
        {
            int idx1 = v[l].second + 1;
            int idx2 = v[r].second + 1;
            if (idx1 > idx2) swap(idx1, idx2);
            cout << idx1 << sp << idx2 << ln;
            bye;
        }
        else if (sum < x) l++;
        else r--;
    }
    cout << "IMPOSSIBLE" << ln;
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
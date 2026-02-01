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
#define ump unordered_map<int,int>
#define mp map<int,int>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Flash ios_base::sync_with_stdio(false); cin.tie(nullptr);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec){for (auto& i : vec) is >> i; return is;}
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec){for (auto& i : vec) os << i << ' '; return os;}

// Function to find msb (most significant bit position)
int msb(int x) {
    return x == 0 ? -1 : 31 - __builtin_clz(x);
}

int solve() {
    int a, b;cin >> a >> b;
    if (a == b) 
    {
        cout << 0 << ln;
        bye;
    }
    if (msb(b) > msb(a)) 
    {
        cout << -1 << ln;
        bye;
    }
    if ((a ^ b) <= a) 
    {
        cout << 1 << ln;
        cout << (a ^ b) << ln;
        bye;
    }
    int m = 1 << msb(a);
    cout << 2 << ln;
    cout << (a ^ (b | m)) << sp << m << ln;
    bye;
}

signed main() {
    Flash
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int testCases; cin >> testCases;
    while(testCases--) solve();
    bye;
}
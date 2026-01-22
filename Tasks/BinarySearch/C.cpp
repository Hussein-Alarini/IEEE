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
    int n, m, k;cin >> n >> m >> k;
    vi sh(n), H(m);cin >> sh;cin >> H;
    sort(all(sh));
    sort(all(H));
    int i = 0, j = 0;  
    int ans = 0;  
    while(i < n && j < m) 
    {
        if(sh[i] <= H[j]) 
        {
            ans++;
            i++;
            j++;
            if(ans == k) break;
        } 
        else j++;
    }
    if(ans >= k) yes
    else no
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
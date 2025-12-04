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
#define umpp unordered_map<ll,int>
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
    int n; ll x;
    cin >> n >> x;

    vector<pair<ll,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }

    sort(all(v)); 

    int l=0, r=n-1;
    while(l<r){
        ll sum = v[l].first + v[r].first;
        if(sum == x){
            int p1 = v[l].second;
            int p2 = v[r].second;
            if(p1>p2) swap(p1,p2); 
            cout << p1 << sp << p2 << ln;
            return 0;
        }
        else if(sum < x) l++;
        else r--;
    }

    cout << "IMPOSSIBLE" << ln;
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

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
    int n;
    cin >> n;

    vi a(n);
    cin >> a;

    vi HU(n);
    stack<int> s;

    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()-1] >= a[i]) s.pop();
        if(s.empty()) HU[i] = 0;
        else HU[i] = s.top();
        s.push(i+1);
    }

    cout << HU << ln;
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

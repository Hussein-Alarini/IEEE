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
    int n;cin >> n;vi t(n);cin >> t;
    int i = 0, j = n - 1;
    ll t1 = 0, t2 = 0;
    int count1 = 0, count2 = 0;
    while (i <= j) 
    {
        if (t1 <= t2)
        {
            t1 += t[i];
            i++;
            count1++;
        } 
        else 
        {
            t2 += t[j];
            j--;
            count2++;
        }
    }
    cout << count1 << sp << count2 << ln;
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
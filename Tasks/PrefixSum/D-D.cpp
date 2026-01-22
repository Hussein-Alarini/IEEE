// بسم الله الرحمن الرحيم 
// Hussein El-sayed Alarini
#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define sp    " "
#define ln    "\n"
#define vi vector<int>
#define vil vector<long long>
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
    int n;cin>>n;
    vil arr(n+1), sarr(n+1);for(int i=1;i<=n;i++)cin>>arr[i];
    vil pri1(n+1);pri1[0]=0;for(int i=1;i<=n;i++)pri1[i]=arr[i]+pri1[i-1];
    sarr=arr;
    sort(sarr.begin()+1,sarr.end());
    vil pri2(n+1);pri2[0]=0;for(int i=1;i<=n;i++)pri2[i]=sarr[i]+pri2[i-1];
    int q;cin>>q;
    int x,y,z;
    while(q--)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            cout<<pri1[z]-pri1[y-1]<<ln;
        }
        else 
        {
            cout<<pri2[z]-pri2[y-1]<<ln;
        }
    }
    
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

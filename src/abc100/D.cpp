#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ll n, m, ans = 0;
    int x, y, z;
    vector<ll> cake;

    cin >> n >> m;
    rep(i, n){
        cin >> x >> y >> z;
        cake.push_back(x + y + z);
    }
    sort(cake.begin(), cake.end());
    rep(i, m){
        ans += cake[i];
    }
    cout << ans << endl;
}
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    int n, k, tmp, one, ans = 0;
    vector<int> v;
    cin >> n >> k;
    rep(i, n){
        cin >> tmp;
        v.push_back(tmp);
        if(tmp == 1) one = i;
    }

    ans = ceil(1.0 * (v.size()-1) / (k - 1));
    cout << ans << endl;
}

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    map<string, int> B, R;
    int N, M, mx = 0;
    string s;
    vector<string> keys;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(find(keys.begin(), keys.end(), s) != keys.end()){
            B[s] = 1;
            R[s] = 0;
            keys.push_back(s);
        }
        else B[s] += 1;
    }
    for(int i = 0; i < N; i++){
        cin >> s;
        R[s] += 1;
    }
    for(int i = 0; i < keys[i].size(); i++){
        if(mx < B[keys[i]] - R[keys[i]]) mx = B[keys[i]] - R[keys[i]];
    }
    cout << mx << endl;
}
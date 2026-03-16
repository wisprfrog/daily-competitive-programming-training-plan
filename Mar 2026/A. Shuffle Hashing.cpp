//URL: https://codeforces.com/problemset/problem/1278/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

map<char, int> mapear_sub(string sub) {
    map<char, int> res;
    for (auto x : sub) res[x]++;

    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string p, s;
        cin>>p>>s;

        map<char, int> map_p = mapear_sub(p);

        bool puede = false;
        for (int i=0; i+p.size()-1 < s.size() && !puede; i++) {
            map<char, int> map_sub = mapear_sub(s.substr(i, p.size()));

            if (map_p == map_sub) puede = true;
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*

 */

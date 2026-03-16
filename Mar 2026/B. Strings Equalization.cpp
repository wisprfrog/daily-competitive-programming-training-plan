//URL: https://codeforces.com/problemset/problem/1223/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin>>q;

    while (q--) {
        string s, t;
        cin>>s>>t;

        set<int> letras_s;
        bool puede = false;
        for (auto x : s) letras_s.insert(x);
        for (auto x : t) if (letras_s.find(x) != letras_s.end()) puede = true;

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}

/*

 */

//URL: https://codeforces.com/contest/2227/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int x, y;
        cin>>x>>y;

        if ((x & 1) && (y&1)) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}
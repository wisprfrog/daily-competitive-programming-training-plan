//URL: https://codeforces.com/contest/2227/problem/B

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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int abren = 0;
        for (auto x : s) abren += x == '(' ? 1 : -1;

        if (abren == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
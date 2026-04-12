//URL: https://codeforces.com/contest/2202/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int x, y;
        cin>>x>>y;

        int suma_x = (y < 0 ? abs(4*y) : abs(2*y));
        int falta = x - suma_x;

        bool puede = false;
        if (falta % 3 == 0 && falta >= 0) puede = true;

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*



 */
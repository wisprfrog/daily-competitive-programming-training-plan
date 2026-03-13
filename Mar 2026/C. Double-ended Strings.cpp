//URL: https://codeforces.com/problemset/problem/1506/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        string a, b;
        cin>>a>>b;

        int mayor_sub = 0;
        for (int tam_sub = 1; tam_sub <= min(a.size(), b.size()); tam_sub++) {
            for (int ini_a = 0; ini_a + tam_sub - 1 < a.size(); ini_a++) {
                for (int ini_b = 0; ini_b + tam_sub - 1 < b.size(); ini_b++) {
                    if (a.substr(ini_a, tam_sub) == b.substr(ini_b, tam_sub)) {
                        mayor_sub = max(mayor_sub, tam_sub);
                    }
                }
            }
        }

        int total = a.size() + b.size();
        cout<<total - (2 * mayor_sub)<<'\n';
    }

    return 0;
}

/*



 */

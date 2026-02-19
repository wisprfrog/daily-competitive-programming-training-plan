// URL: https://codeforces.com/contest/2167/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 1000005;
const int MOD = 998244353;

vector<bool> primo(60, true);

void criba() {
    primo[0] = false;
    primo[1] = false;
    for (int i=3; i<=60; i+=2) {
        if (primo[i]) {
            for (int j=i*i; j<=60; j+=i) primo[j] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        ll menor = LLONG_MAX;
        for (int i=1; i<=n; i++) {
            ll num;
            cin>>num;

            for (ll j=2; j<=60; j++) {
                if (primo[j]) {
                    ll gcdd = __gcd(num, j);
                    if (gcdd == 1) {
                        menor = min(menor, j);
                        break;
                    }
                }
            }
        }

        cout<<menor<<'\n';
    }

    return 0;
}

/*



 */
 
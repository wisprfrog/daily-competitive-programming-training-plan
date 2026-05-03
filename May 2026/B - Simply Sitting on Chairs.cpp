//URL: https://codeforces.com/problemset/problem/2210/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int p[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;


        for (int i=1; i<=n; i++) cin>>p[i];

        int fin = n, cont = 0;
        for (int i=1; i<=n && p[i] != -1; i++) {
            if (p[i] <= i) cont++;
            else { //es mayor
                if (p[i] == fin) {
                    p[fin] = -1;
                    fin--;
                    cont++;
                }
            }
        }

        cout<<cont<<'\n';
    }

    return 0;
}

/*



 */
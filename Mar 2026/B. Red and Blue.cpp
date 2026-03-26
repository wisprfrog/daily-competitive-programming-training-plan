//URL: https://codeforces.com/problemset/problem/1469/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int r[105], b[105], mayor, n, m;

bool visita[105][105];

void mask(int suma, int pos_r, int pos_b) {
    if (pos_r > n && pos_b > m) return;

    if (pos_r <= n) {
        int camino_r = suma + r[pos_r];
        mayor = max(mayor, camino_r);

        if (!visita[pos_r+1][pos_b]) {
            visita[pos_r+1][pos_b] = true;
            mask(camino_r, pos_r+1, pos_b);
        }
    }

    if (pos_b <= m) {
        int camino_b = suma + b[pos_b];
        mayor = max(mayor, camino_b);

        if (!visita[pos_r][pos_b+1]) {
            visita[pos_r][pos_b+1] = true;
            mask(camino_b, pos_r, pos_b+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        cin>>n;

        for (int i=1; i<=n; i++) cin>>r[i];

        cin>>m;

        for (int i=1; i<=m; i++) cin>>b[i];

        mayor = 0;
        for (int i=1; i<=n+1; i++) {
            for (int j=1; j<=m+1; j++) visita[i][j] = false;
        }
        mask(0, 1, 1);

        cout<<mayor<<'\n';
    }

    return 0;
}

/*



 */
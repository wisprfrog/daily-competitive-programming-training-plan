//URL: https://codeforces.com/problemset/problem/1167/C
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int n, padres[MAXN], tam[MAXN];

void init() {
    for (int i=1; i<=n; i++) {
        padres[i] = i;
        tam[i] = 1;
    }
}

int buscar(int u) {
    if (u == padres[u]) return u;

    return padres[u] = buscar(padres[u]);
}

void unir(int u, int v) {
    u =  buscar(u);
    v = buscar(v);

    if (u != v) {
        if (tam[u] < tam[v]) swap(u, v);

        padres[v] = u;
        tam[u] += tam[v];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m;
    cin>>n>>m;

    init();

    for(int i=1; i<=m; i++) {
        int grupo;
        cin>>grupo;

        int primero;
        for (int j=1; j<=grupo; j++) {
            int v;
            cin>>v;

            if (j == 1) primero = v;
            else unir(primero, v);
        }
    }

    for (int i=1; i<=n; i++) {
        int raiz = buscar(i);
        cout<<tam[raiz]<<' ';
    }

    return 0;
}

/*



 */


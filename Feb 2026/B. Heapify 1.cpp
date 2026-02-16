// URL: https://codeforces.com/contest/2195/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN];
int padres[MAXN], tam[MAXN];
map<int, int> pos;

void init() {
    for (int i=1; i<=200000; i++) {
        padres[i] = i;
        tam[i] = 1;
    }
}

int buscar(int u) {
    if (u == padres[u]) return u;

    return padres[u] = buscar(padres[u]);
}

void unir(int u, int v) {
    u = buscar(u);
    v = buscar(v);

    if (u != v) {
        if (tam[u] < tam[v])swap(u, v);
        padres[v] = u;
        tam[u] += tam[v];
    }
}

void construir() {
    for (ll i=1; i<=200000; i++) {
        if (buscar(i) == i) {
            for (ll j = i*2; j<=200000; j+=j) unir(i, j);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    init();
    construir();

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) {
            cin>>arr[i];

            pos[arr[i]] = i;
        }

        bool puede = true;
        for (int i=1; i<=n && puede; i++) {
            if (arr[i] != i) {
                int raiz1 = buscar(arr[i]);
                int raiz2 = buscar(i);

                if (raiz1 != raiz2) puede = false;
            }
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";

        pos.clear();
    }

    return 0;
}

/*



 */


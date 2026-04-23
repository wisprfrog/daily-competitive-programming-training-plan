//URL: https://codeforces.com/problemset/problem/2143/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

vector<int> ady[200005];
int gradoEntrada[200005], res[200005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<n; i++) {
            int u, v, x, y;
            cin>>u>>v>>x>>y;

            if (x > y) {
                if (u < v) swap(u, v); //el mayor debe ser u
            }
            else {
                if (u > v) swap(u, v); //u debe ser <= v
            }

            ady[u].push_back(v);
            gradoEntrada[v]++;
        }

        queue<int> bfs;
        for (int i=1; i<=n; i++) {
            if (gradoEntrada[i] == 0) bfs.push(i);
        }

        int indice = 1;
        while (!bfs.empty()) {
            int nodo = bfs.front();
            bfs.pop();

            res[nodo] = indice++;

            for (auto x : ady[nodo]) {
                gradoEntrada[x]--;
                if (gradoEntrada[x] == 0) bfs.push(x);
            }
        }

        for (int i=1; i<=n; i++) {
            cout<<res[i]<<' ';
            ady[i].clear();
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */
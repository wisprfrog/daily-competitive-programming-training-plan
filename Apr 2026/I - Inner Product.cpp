//URL: https://codeforces.com/gym/106495/problem/I

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 1000001;
const int MOD = 1e9 + 7;

ll a[200001], b[200001], entradas[200001];
vector<int> ady[200001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) cin>>a[i];

    string s;
    cin>>s;

    int tam_s = s.size();

    for (int i=0; i<tam_s; i++) {
        int u = i+1;
        while (s[i] == '=' && i < tam_s) i++;

        if (i < tam_s) {
            int v = i+2;

            if (s[i] == '<') {
                ady[u].push_back(v);
                entradas[v]++;
            }
            else {
                ady[v].push_back(u);
                entradas[u]++;
            }
        }
    }

    queue<pair<int, ll>> bfs;
    for (int i=1; i<=n; i++) if (entradas[i] == 0) bfs.push({i, 1});

    while (!bfs.empty()) {
        auto [nodo, val] = bfs.front();
        bfs.pop();

        b[nodo] = max(b[nodo], val);

        for (auto x : ady[nodo]) {
            entradas[x]--;
            if (entradas[x] == 0) bfs.push({x, val+1});
        }
    }

    for (int i=0; i<tam_s; i++) {
        if (s[i] == '=') {
            int u = i+1;
            while (s[i] == '=' && i<tam_s) {
                int v = i+2;
                b[v] = max(b[v], b[u]);
                i++;
            }
        }
    }

    for (int i=tam_s-1; i>=0; i--) {
        if (s[i] == '=') {
            int u = i+2;
            while (s[i] == '=' && i>=0) {
                int v = i+1;
                b[v] = max(b[v], b[u]);
                i--;
            }
        }
    }

    ll suma = 0;
    for (int i=1; i<=n; i++) suma += a[i] * b[i];

    cout<<suma<<'\n';
    for (int i=1; i<=n; i++) cout<<b[i]<<' ';

    return 0;
}

/*



 */
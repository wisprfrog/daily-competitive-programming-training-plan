//URL: https://codeforces.com/problemset/problem/2203/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

map<char, int> cuantas;
vector<pair<int, char>> pos;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   int t;
    cin>>t;

    while (t--) {
        int n, m, d;
        cin>>n>>m>>d;

        int encima_de_base = d/m; //cuantas puede haber encima de la base de la torre

        if (encima_de_base == 0) {
            cout<<n<<'\n';
            continue;
        }

        int torres = n/(encima_de_base+1) + (n%(encima_de_base+1) != 0 ? 1 : 0);

        cout<<torres<<'\n';
    }

    return 0;
}

/*



 */
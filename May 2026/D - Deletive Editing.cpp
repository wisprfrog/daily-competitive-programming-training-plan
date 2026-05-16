//URL: https://codeforces.com/problemset/problem/1666/D

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

    cin.ignore();

    while (t--) {
        string s, buscar;
        cin>>s>>buscar;

        for (auto x : buscar) cuantas[x]++;

        bool puede = true;
        for (auto [letra, frec] : cuantas) {
            int frec_aux = frec;
            for (int i=s.size()-1; i>=0 && frec_aux > 0; i--) {
                if (s[i] == letra) {
                    pos.push_back({i, letra});
                    frec_aux--;
                }
            }

            if (frec_aux > 0) {
                puede = false;
                break;
            }
        }

        if (puede) {
            sort(pos.begin(), pos.end());

            for (int i=0; i<pos.size() && puede; i++) {
                if (buscar[i] != pos[i].second) puede = false;
            }
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";

        cuantas.clear();
        pos.clear();
    }


    return 0;
}

/*



 */
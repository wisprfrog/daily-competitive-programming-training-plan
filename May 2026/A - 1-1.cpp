//URL: https://codeforces.com/problemset/problem/2207/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        for (int i=0; i+2<n; i++) {
            string sub =  s.substr(i, 3);

            if (sub == "101") s[i+1] = '1';
        }

        int ceros = 0,  mayor = 0;
        for (int i=0; i<n; i++) {
            if (s[i] == '1') {
                int tam = 0;
                while (s[i] == '1' && i < n) {
                    mayor++;
                    tam++;
                    i++;
                }

                i--;
                int validos = tam - (tam%2 == 0 ? 1 : 0);
                ceros += validos/2;
            }
        }

        int menor = mayor - ceros; //menor guarda los ceros generados, por eso es comple
        cout<<menor<<' '<<mayor<<'\n';
    }

    return 0;
}

/*



 */
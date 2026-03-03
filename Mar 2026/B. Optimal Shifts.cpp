//URL: https://codeforces.com/problemset/problem/2176/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        queue<int> cadena;
        string s;
        cin>>s;
        for (auto x : s) cadena.push(x - '0');

        while (cadena.front() == 0 && cadena.back() == 0) {
            cadena.push(cadena.front());
            cadena.pop();
        }

        int mayor_conse = 0;
        int cont = 0;
        while (!cadena.empty()) {
            if (cadena.front() == 1) {
                mayor_conse = max(mayor_conse, cont);
                cont = 0;
            }
            else cont++;

            cadena.pop();
        }

        mayor_conse = max(mayor_conse, cont);

        cout<<mayor_conse<<'\n';
    }



    return 0;
}

/*



 */

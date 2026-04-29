//URL: https://codeforces.com/gym/106495/problem/J

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 1000005;
const int MOD = 1e9 + 7;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        ull n;
        cin>>n;

        ull cant_pares = n/2;
        ull cant_impares = (n+1)/2;

        ull comb_impares_par = (cant_impares*(cant_impares-1)/2 * cant_pares)%MOD;
        ull comb_pares = (cant_pares*(cant_pares-1)*(cant_pares-2)/6)%MOD;

        ull suma = (comb_impares_par + comb_pares)%MOD;

        cout<<suma<<'\n';
    }



    return 0;
}

/*



 */
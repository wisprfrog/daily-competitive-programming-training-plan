//URL: https://codeforces.com/problemset/problem/2030/A

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

        int mayor = 0, menor = INT_MAX;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            mayor = max(mayor, num);
            menor = min(menor, num);
        }

        int dif = mayor*(n-1) - menor*(n-1);

        cout<<dif<<'\n';
    }

    return 0;
}

/*



 */
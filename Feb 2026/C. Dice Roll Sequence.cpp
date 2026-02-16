// URL: https://codeforces.com/contest/2195/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

vector<int> arr(MAXN), cube(MAXN);

int opuestos [] = {0, 6, 5, 4, 3, 2, 1};

bool malo(int i, int j) {
    return arr[i] == opuestos[arr[j]] || arr[i] == arr[j];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        int cont = 0;
        int pares_malos = 0;
        for (int i=1; i<n; i++) {
            if (malo(i, i+1)) pares_malos++;
            else {
                cont += pares_malos/2 + pares_malos%2;
                pares_malos = 0;
            }
        }

        if (pares_malos > 0) cont += pares_malos/2 + pares_malos%2;

        cout<<cont<<'\n';
    }

    return 0;
}

/*

1
7
1 6 1 6 1 6 1

 */


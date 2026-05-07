//URL: https://codeforces.com/problemset/problem/2227/D

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int arr[200001], n, doble_n;
bool cube_mex[100001];

int calcular_mex(int ini, int fin) {
    for (int i=0; i<=n; i++) cube_mex[i] = false;

    int aux_ini = ini, aux_fin = fin;
    bool puede = true;

    while (aux_ini <= aux_fin && puede) {
        if (arr[aux_ini] == arr[aux_fin]) {
            cube_mex[arr[aux_ini]] = true;
            aux_ini++;
            aux_fin--;
        }
        else puede = false;
    }

    if (puede) {
        int mex = 0;
        ini--;
        fin++;

        while (ini >= 1 && fin <= doble_n) {
            if (arr[ini] != arr[fin]) break;

            cube_mex[arr[ini]] = true;
            ini--;
            fin++;
        }

        for (int i=0; i<=n; i++) {
            if (!cube_mex[i]) break;

            mex++;
        }

        return mex;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        cin>>n;

        doble_n = n*2;

        int ini = INT_MAX, fin = INT_MIN;
        for (int i=1; i<=doble_n; i++) {
            cin>>arr[i];

            if (arr[i] == 0) {
                ini = min(ini, i);
                fin = max(fin, i);
            }
        }

        int dos_ceros = calcular_mex(ini, fin); //palindromo hacia adentro y hacia afuera
        int cero_izq = 0;
        int cero_der = 0;

        if (dos_ceros == -1) {
            cero_izq = calcular_mex(ini, ini); //palidnromo hacia afuera
            cero_der = calcular_mex(fin, fin); //palindromo hacia afuera
        }

        cout<<max(dos_ceros, max(cero_izq, cero_der))<<'\n';
    }

    return 0;
}

/*

6
4
1 2 0 3 3 0 2 1
2
0 1 0 1
2
1 1 0 0
3
2 0 2 1 1 0
4
0 1 3 0 3 1 2 2
3
0 1 2 1 0 2


 */
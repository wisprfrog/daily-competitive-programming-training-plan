//URL: https://codeforces.com/contest/1359/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

char mat[105][1005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, m, x, y;
        cin>>n>>m>>x>>y;

        y = min(y, x*2); //es mas barato poner y o poner dos x

        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) cin>>mat[i][j];
        }

        int res = 0;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if (mat[i][j] == '.') {
                    int tomar_uno = x, tomar_dos_x = INT_MAX, tomar_dos_y = INT_MAX;
                    if (j < m) {
                        if (mat[i][j+1] == '.') {
                            tomar_dos_x = x*2;
                            tomar_dos_y = y;
                        }
                    }

                    if (tomar_dos_x == INT_MAX) {
                        res += x;
                        mat[i][j] = '*';
                    }
                    else { //si hay adyacente
                        if (tomar_dos_x <= tomar_dos_y) res += tomar_dos_x;
                        else res += tomar_dos_y;

                        mat[i][j] = '*';
                        mat[i][j+1] = '*';
                    }
                }

            }
        }

        cout<<res<<'\n';
    }

    return 0;
}

/*

1
5
01100
10101

 */
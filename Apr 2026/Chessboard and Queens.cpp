//URL: https://cses.fi/problemset/task/1624

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

const int n = 8;
int res = 0;
char mat[n+1][n+1];
bool ataca_col[n+1], ataca_diag[n*2 + 1], ataca_diag_inver[n*2 + 1];

void back_tracking(int i) {
    if (i > n) { //ya pusiste 8 reynas
        res++;
        return;
    }

    for (int j=1; j<=n; j++) {
        if (mat[i][j] == '.') {
            if (!ataca_col[j] && !ataca_diag[i+j] &&
                !ataca_diag_inver[j+(n-i+1)]) {
                //el resultado de suma i+j identifica la diagonal a la que
                //pertenece el elemento en (i, j)

                //para la diagonal inversa es lo mismo, solo que, dado que
                //empezamos desde abajo, a n se le resta i para que tengamos
                //los mismos resultados como si calcularamos la diagonal
                ataca_col[j] = ataca_diag[i+j] = ataca_diag_inver[j+(n-i+1)] = true;
                back_tracking(i+1);

                ataca_col[j] = ataca_diag[i+j] = ataca_diag_inver[j+(n-i+1)] = false;
            }
        }

    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) cin>>mat[i][j];
    }

    back_tracking(1);

    cout<<res<<'\n';

    return 0;
}

/*

........
........
..*.....
........
........
.....**.
...*....
........

 */
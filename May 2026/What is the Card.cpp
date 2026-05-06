//URL: https://vjudge.net/problem/UVA-10646

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

    for (int q=1; q<=t; q++){
        vector<string> mano, juego;
        for (int i=1; i<=52; i++) {
            string carta;
            cin>>carta;

            if (i <= 27) juego.push_back(carta);
            else mano.push_back(carta);
        }

        int y = 0;
        for (int i=1; i<=3; i++) {
            int x;
            if (isdigit(juego.back()[0]) && juego.back()[0] > '1') x = juego.back()[0] - '0';
            else x = 10;

            juego.pop_back();
            for (int j=1; j<=10-x; j++) juego.pop_back();
            y += x;
        }

        for (auto num : mano) juego.push_back(num);

        cout<<"Case "<<q<<": "<<juego[y-1]<<'\n';
    }

    return 0;
}

/*



*/
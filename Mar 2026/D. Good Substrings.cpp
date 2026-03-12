//URL: https://codeforces.com/contest/271/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int PRIMO_ABC = 31;
const int MOD_ABC = 1e9 + 9;
const int MOD = 998244353;

set<char> malas;
ll potes[1505];
pair<ll, int> prefix_hash[1505]; //hasheo, letras_malas

void calc_potes(int tam) {
    //calcula la potenciacion de cada termino s_1 * p^0 + s_2 * p^1 + ... + s_n * p^(n-1)
    potes[0] = 1;
    for (int i=1; i<tam; i++) potes[i] = (potes[i-1] * PRIMO_ABC) % MOD_ABC;
}

void calc_prefix_hash(string s, int tam) {
    for (int i=0; i<tam; i++) {
        prefix_hash[i+1].first = (prefix_hash[i].first + (s[i] - 'a' + 1) * potes[i]) % MOD_ABC;

        if (i > 0) prefix_hash[i].second = prefix_hash[i-1].second;
        if (malas.find(s[i]) != malas.end()) prefix_hash[i].second++;
    }

    //es importante sumar 1 a s[i] - 'a' para que al econtrar una 'a', el hasheo no se vuelva cero
    //esto evita que haya hasheos duplicados para string diferentes
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    string mal;
    cin>>mal;

    char letra = 'a';
    for (auto pos : mal) {
        if (pos == '0') malas.insert(letra);
        letra++;
    }

    int k;
    cin>>k;

    //determinar el numero de diferentes substrings en string hasheando
    int tam = s.size();

    calc_potes(tam);
    calc_prefix_hash(s, tam);

    ll cont = 0;
    for (int tam_sub = 1; tam_sub<=tam; tam_sub++) { //tamanio del substring
        set<ll> buenas;
        for (int i=0; i<tam-tam_sub+1; i++) {
            pair<ll, int> prefix_actual;
            prefix_actual.first =  (prefix_hash[i+tam_sub].first + MOD_ABC - prefix_hash[i].first) % MOD_ABC;
            prefix_actual.first = (prefix_actual.first * potes[tam-i-1]) % MOD_ABC;

            //se multiplica por potes[tam-i-1] porque por ejemplo, si el substring es de tamanio 2
            //debemos escalar todos los substring al mismo exponente
            //si tenemos s[1] * p^0 + s[2] * p^1  y luego s[4] * p^3 + s[5] * p^4
            //el primer hasheo esta desfasado por p^3, por lo que solo hay que mutliplicarlo por p^3

            //si i = tam - 1, entonces s[tam-1] * p^(tam-2)
            //para i = 1 s[1] * p^0, debe ser escalado a tam-2, por eso tam-i-1 = tam-1-1 = tam-2
            //resultando en s[1] * p^0 * p^(tam-2) = s[1] * p^(tam-2)
            //para s[2], s[2] * p^1, tam-i-1 = tam-2-1 = tam-3
            //resultando en s[2] * p^1 * p^(tam-3) = s[2] * p^(tam-2)

            prefix_actual.second = prefix_hash[i+tam_sub-1].second - (i-1 >= 0 ? prefix_hash[i-1].second : 0);
            if (prefix_actual.second <= k) buenas.insert(prefix_actual.first);
        }
        cont += buenas.size();
    }

    cout<<cont;

    return 0;
}

/*



 */

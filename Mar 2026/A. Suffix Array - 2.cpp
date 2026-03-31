//URL: https://codeforces.com/edu/course/2/lesson/2/2/practice/contest/269103/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    s += '$';
    int n = s.size();

    vector<int> indices(n), clases(n);

    //crea un ambito -> todo lo que se crea solo se reconoce dentro de el
    {
        //k == 0

        vector<pair<char, int>> arr(n);
        for (int i=0; i<n; i++) arr[i] = {s[i], i};
        sort(arr.begin(), arr.end());

        for (int i=0; i<n; i++) indices[i] = arr[i].second;

        clases[indices[0]] = 0;
        for (int i=1; i<n; i++) {
            if (arr[i].first != arr[i-1].first) clases[indices[i]] = clases[indices[i-1]] + 1;
            else clases[indices[i]] = clases[indices[i-1]];
        }
    }

    int k = 0;
    vector<pair<pair<int, int>, int>> trans(n);
    while ((1 << k) < n) { //cuando 2^k sea >= n, ya no nos sirve el resultado
        for (int i=0; i<n; i++) {
            int mit_izq = i; //inicio mit izquierda
            int mit_der = (i + (1 << k)) % n; //inicio mit derecha

            //modulazo para manejar indices validos

            trans[i] = {{clases[mit_izq], clases[mit_der]}, i};
        }
        sort(trans.begin(), trans.end());

        for (int i=0; i<n; i++) indices[i] = trans[i].second;

        clases[indices[0]] = 0;
        for (int i=1; i<n; i++) {
            if (trans[i].first != trans[i-1].first) clases[indices[i]] = clases[indices[i-1]] + 1;
            else clases[indices[i]] = clases[indices[i-1]];
        }

        k++;
    }

    for (auto x : indices) cout<<x<<' ';

    return 0;
}

/*

1
5
01100
10101

 */
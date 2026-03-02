//URL: https://codeforces.com/problemset/problem/2167/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

map<char, int> cubos, nombre;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin>>q;

    while (q--) {
        int n;
        cin>>n;
        string s, t;
        cin>>s>>t;

        for (auto x : s) {
            cubos[x]++;
        }
        for (auto x : t) {
            nombre[x]++;
        }

        bool puede = true;
        for (auto x : nombre) {
            if (cubos[x.first] != nombre[x.first]) {
                puede = false;
                break;
            }
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";

        cubos.clear();
        nombre.clear();
    }


    return 0;
}

/*



 */

//URL: https://codeforces.com/problemset/problem/2180/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 262149;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);



    int t;
    cin>>t;
    while (t--) {
        int l, a , b;
        cin>>l>>a>>b;

        int mayor = a;
        int pos = a;
        set<int> visita;
        do {
            mayor = max(mayor, pos);
            pos += b;
            pos %= l;

            if (visita.find(pos) == visita.end()) visita.insert(pos);
            else break;
        }while (true);

        cout<<mayor<<'\n';
    }

    return 0;
}

/*



 */
 
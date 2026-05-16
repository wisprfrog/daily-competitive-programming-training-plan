//URL: 

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
        int a, b, x, y;
        cin>>a>>b>>x>>y;

        if (b < a){
            if ((a^1) != b) cout<<"-1\n"; //equivale a resta 1 en números impares
            else cout<<y<<'\n';
        }
        else {
            int costo;
            if (x <= y) costo = (b-a)*x;
            else { //suma 1 con xor y hacer par con operacion x
                int par = (b-a)/2;
                int impar = (b-a)/2 + (b-a)%2;

                if (a & 1) costo = impar*x + par*y; //primera operacion con x
                else costo = impar*y + par*x; //primera operacion con y
            }

            cout<<costo<<'\n';
        }
    }

    return 0;
}

/*



 */
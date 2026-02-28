//URL: https://codeforces.com/problemset/problem/2171/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int cont = 0;
        for (int i=0;i<=n;i++) {
            for (int j=0; j<=n; j++) {
                int patas = 2*i + 4*j;

                cont += (patas == n ? 1 : 0);
            }
        }

        cout<<cont<<'\n';
    }


    return 0;
}

/*



 */

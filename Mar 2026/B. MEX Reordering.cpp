//URL: https://codeforces.com/problemset/problem/2191/B
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

map<int, int> mapita;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int cont0 = 0, cont1 = 0;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            cont0 += num == 0 ? 1 : 0;
            cont1 += num == 1 ? 1 : 0;
        }

        if ((cont0 > 0 && cont1 > 0) || (cont0 == 1 && cont1 == 0)) cout<<"YES\n";
        else cout<<"NO\n";
    }



    return 0;
}

/*



 */

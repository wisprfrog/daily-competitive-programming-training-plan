//URL: https://codeforces.com/gym/106495/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;

    double gasto = 0;
    for (int i=1; i<=n; i++) {
        double item;
        cin>>item;

        gasto += item;
    }

    double dinero = 0;
    for (int i=1; i<=m; i++) {
        double pone;
        cin>>pone;

        dinero += pone;
    }

    double tip = gasto * 1.10;
    if (dinero >= tip) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

/*



 */
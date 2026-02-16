// URL: https://codeforces.com/contest/2195/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;

        bool puede = false;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            if (num == 67) puede = true;
        }

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*



 */


//URL: https://codeforces.com/problemset/problem/2209/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

ll arr[105];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        ll c, k;
        cin>>n>>c>>k;

        for (int i=1; i<=n; i++) cin>>arr[i];
        sort(arr+1, arr+n+1);

        for (int i=1; i<=n; i++) {
            if (arr[i] > c) break;

            ll difer = c-arr[i];
            c += arr[i] + min(k, difer);
            k -= min(k, difer);
        }

        cout<<c<<'\n';
    }

    return 0;
}

/*



 */
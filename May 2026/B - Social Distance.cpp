//URL: https://codeforces.com/problemset/problem/1668/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int arr[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, m;
        cin>>n>>m;

        for (int i=1; i<=n; i++) cin>>arr[i];

        if (n >= m) {
            cout<<"NO\n";
            continue;
        }

        sort(arr+1, arr+n+1, greater<int>());

        int libres = m-(arr[1]*2)-1;
        for (int i=2; i<=n && libres >= 0; i++) {
            if (i == n && libres >= 1) {
                libres = 0;
                break;
            }
            libres -= arr[i]+1;
        }

        if (libres >= 0) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}

/*



 */
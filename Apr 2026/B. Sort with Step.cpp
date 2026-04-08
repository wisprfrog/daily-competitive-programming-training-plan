//URL: https://codeforces.com/problemset/problem/1823/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

pair<int, int> arr[200005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        for (int i=1; i<=n; i++) {
            cin>>arr[i].first;
            arr[i].second = i;
        }

        int res = 0;
        if (k > 1) {
            sort(arr+1, arr+n+1);
            int cont = 0;
            for (int i=1; i<=n; i++) {
                int difer = abs(arr[i].second - i);

                if (difer % k != 0) cont++;
            }

            if (cont == 2) res = 1;
            if (cont > 2) res = -1;
        }

        cout<<res<<'\n';
    }

    return 0;
}

/*



 */
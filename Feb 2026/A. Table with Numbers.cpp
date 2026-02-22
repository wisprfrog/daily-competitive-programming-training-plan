//URL: https://codeforces.com/problemset/problem/2189/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int arr[105];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, h, l;
        cin>>n>>h>>l;
        for (int i=1; i<=n; i++) cin>>arr[i];
        sort(arr+1, arr+n+1);

        int pares = 0, prim = 1;
        for (int i=n; i>=1 && i > prim; i--) {
            if (arr[i] <= max(h, l)) {
                while (arr[prim] > min(h, l) && prim < i) prim++;

                if (prim == i) break;
                prim++;
                pares++;
            }
        }
        cout<<pares<<'\n';
    }

    return 0;
}

/*



 */
 
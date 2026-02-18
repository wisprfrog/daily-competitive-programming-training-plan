//URL: https://codeforces.com/problemset/problem/2179/C
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

        for (int i=1; i<=n; i++) cin>>arr[i];

        sort(arr+1, arr+n+1);

        int posible_mayor_k = arr[2] - arr[1];

        int res;
        if (posible_mayor_k <= arr[1]) res = arr[1];
        else res = posible_mayor_k;

        cout<<res<<'\n';
    }

    return 0;
}

/*



 */
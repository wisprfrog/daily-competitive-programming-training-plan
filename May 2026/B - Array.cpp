//URL: https://codeforces.com/problemset/problem/2209/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int arr[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        for (int i=1; i<=n; i++) {
            int menores = 0, mayores = 0;
            for (int j=i+1; j<=n; j++) {
                if (arr[j] > arr[i]) mayores++;
                if (arr[j] < arr[i]) menores++;
            }
            cout<<max(mayores, menores)<<' ';
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */
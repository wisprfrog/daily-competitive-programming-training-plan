//URL: https://codeforces.com/problemset/problem/2188/A
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
        int n;
        cin>>n;

        int num = 1;
        int ultim = -1;
        for (int i=n; i>=1; i-=2) {
            arr[i] = num;
            num++;
            ultim = i;
        }

        ultim = (ultim == 2 ? 1 : 2);
        for (int i=ultim; i<n; i+=2) {
            arr[i] = num;
            num++;
        }

        for (int i=1; i<=n; i++) cout<<arr[i]<<' ';
        cout<<'\n';
    }

    return 0;
}

/*



 */
 
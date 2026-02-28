//URL: https://codeforces.com/problemset/problem/2183/A
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

        for(int i=1; i<=n; i++) cin>>arr[i];

        if (arr[1] == 1 || arr[n] == 1) cout<<"Alice\n";
        else cout<<"Bob\n";

    }


    return 0;
}

/*



 */

//URL: https://codeforces.com/problemset/problem/2184/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;

int arr[MAXN], inver[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        if (n == 2 || n == 3) cout<<n<<'\n';
        else {
            if (n & 1) cout<<"1\n";
            else cout<<"0\n";
        }
    }

    return 0;
}

/*



 */
 
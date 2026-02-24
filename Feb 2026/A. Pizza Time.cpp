//URL: https://codeforces.com/contest/2156/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 500005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int res = 0;
        while (n >= 3) {
            res++;
            n -= 2;
        }

        cout<<res<<'\n';
    }

    return 0;
}

/*



 */
 
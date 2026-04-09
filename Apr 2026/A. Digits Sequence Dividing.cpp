//URL: https://codeforces.com/contest/1107/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        if (n > 2) cout<<"YES\n2\n"<<s[0]<<' '<<s.substr(1, n-1)<<'\n';
        else {
            if (s[0] < s[1]) cout<<"YES\n2\n"<<s[0]<<' '<<s[1]<<'\n';
            else cout<<"NO\n";
        }
    }

    return 0;
}

/*



 */
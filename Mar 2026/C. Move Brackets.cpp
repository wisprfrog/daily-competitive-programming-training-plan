//URL: https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
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

        int abre = 0;
        int buenos = 0;
        for (auto x : s) {
            if (x == '(') abre++;
            else if (abre > 0){ //es )
                abre--;
                buenos++;
            }
        }

        int res = n - (buenos * 2);
        cout<<res/2<<'\n';
    }

    return 0;
}

/*

 */

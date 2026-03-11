//URL: https://codeforces.com/problemset/problem/2162/B

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

        if (n == 1) {
            cout<<"0\n\n";
            continue;
        }

        vector<int> unos, ceros;
        int pos = 1;
        for (auto x : s) {
            if (x == '0') ceros.push_back(pos);
            else unos.push_back(pos);

            pos++;
        }

        if (!unos.empty()) {
            cout<<unos.size()<<'\n';
            for (auto x : unos) cout<<x<<' ';
            cout<<'\n';
        }
        else if(!ceros.empty()){
            cout<<ceros.size()<<'\n';
            for (auto x : ceros) cout<<x<<' ';
            cout<<'\n';
        }
    }

    return 0;
}

/*



 */

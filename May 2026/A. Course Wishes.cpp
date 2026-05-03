//URL: https://codeforces.com/problemset/problem/2216/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 1000001;
const int MOD = 1e9 + 7;

pair<int, int> b[22];
map<int, int> limite; //nivel, limite

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        for (int i=1; i<=k; i++) {
            int lim;
            cin>>lim;

            limite[i] = lim;
        }

        for (int i=1; i<=n; i++){
            int nivel;
            cin>>nivel;

            b[i] = {nivel, i};
        }
        sort(b+1, b+n+1, greater<pair<int, int>>());

        vector<int> res;
        for (int i=1; i<=n; i++) {
            while (b[i].first < k+1) {
                res.push_back(b[i].second);
                b[i].first++;
            }
        }

        cout<<res.size()<<'\n';
        for (auto x : res) cout<<x<<' ';
        cout<<'\n';
    }

    return 0;
}

/*



 */
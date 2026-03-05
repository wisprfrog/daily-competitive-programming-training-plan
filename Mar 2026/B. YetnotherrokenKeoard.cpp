//URL: https://codeforces.com/problemset/problem/1907/B
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
        string s;
        cin>>s;

        stack<pair<int, char>> mayus, minus;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'B') {
                if (!mayus.empty()) mayus.pop();
                continue;
            }
            if (s[i] == 'b') {
                if (!minus.empty()) minus.pop();
                continue;
            }

            if (isupper(s[i])) mayus.push({i, s[i]});
            else  minus.push({i, s[i]});
        }

        map<int, char> orden;
        while (!mayus.empty() || !minus.empty()) {
            if (!mayus.empty()) {
                orden[mayus.top().first] = mayus.top().second;
                mayus.pop();
            }

            if (!minus.empty()) {
                orden[minus.top().first] = minus.top().second;
                minus.pop();
            }
        }

        for (auto x : orden) cout<<x.second;
        cout<<'\n';
    }



    return 0;
}

/*



 */

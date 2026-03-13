//URL: https://codeforces.com/contest/1791/problem/D

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;

struct l {
    set<char> letras;
    bool lleno = false;
};

l sufi[200005];

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

        set<char> todas_letras;
        for (auto x : s) todas_letras.insert(x);

        for (int i=s.size()-1; i>=0; i--) {
            if (i < s.size()-1) {
                if (sufi[i+1].letras == todas_letras) sufi[i].lleno = true;
                else {
                    sufi[i] = sufi[i+1];
                    sufi[i].letras.insert(s[i]);
                }
            }
            else sufi[i].letras.insert(s[i]);
        }

        ll res = INT_MIN;
        set<char> pref;
        for (int i=0; i<s.size()-1; i++) {
            pref.insert(s[i]);

            ll suma = pref.size() + (sufi[i+1].lleno ? todas_letras.size() : sufi[i+1].letras.size());

            res = max(res, suma);
        }

        for (int i=0; i<s.size(); i++) sufi[i]= {};

        cout<<res<<'\n';
    }

    return 0;
}

/*



 */

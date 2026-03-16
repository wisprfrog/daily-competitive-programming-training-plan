//URL: https://codeforces.com/problemset/problem/1251/A

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
        string s;
        cin>>s;

        int tam = 0;
        set<char> buenas;
        for (int i=0; i<s.size(); i++) {
            int pos = i;
            while (pos < s.size() && s[i] == s[pos]) {
                pos++;
                tam++;
            }

            if (tam & 1) buenas.insert(s[i]);

            i = pos-1;
            tam = 0;
        }

        for (auto x : buenas) cout<<x;
        cout<<'\n';
    }

    return 0;
}

/*

 */

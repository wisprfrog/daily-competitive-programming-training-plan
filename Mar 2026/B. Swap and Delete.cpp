//URL: https://codeforces.com/problemset/problem/1913/B
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

        int cont0 = 0, cont1 = 0;
        for (auto x : s) x == '1' ? cont1++ : cont0++;

        int elim = 0;
        for (auto x : s) {
            if ((x == '1' && cont0 == 0) || (x == '0' && cont1 == 0)) {
                elim = cont0 + cont1;
                break;
            }

            if (x == '1') cont0--;
            else cont1--;
        }

        cout<<elim<<'\n';
    }



    return 0;
}

/*



 */

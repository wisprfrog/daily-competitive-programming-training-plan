//URL: https://codeforces.com/contest/2227/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int res[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> div_6, div_2, div_3, otros;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            if (num % 6 == 0) div_6.push_back(num);
            else if (num % 2 == 0) div_2.push_back(num);
            else if (num % 3 == 0) div_3.push_back(num);
            else otros.push_back(num);
        }

        int ini = 1;
        for (auto x : div_6) {
            res[ini] = x;
            ini++;
        }

        int fin = n;
        for (int i=1; i<=min(div_2.size(), div_3.size()); i++) {
            res[ini] = div_2.back();
            res[fin] = div_3.back();

            div_2.pop_back();
            div_3.pop_back();
            ini++;
            fin--;
        }

        while(!div_2.empty()) {
            res[ini] = div_2.back();
            ini++;
            div_2.pop_back();
        }

        while (!div_3.empty()) {
            res[fin] = div_3.back();
            fin--;
            div_3.pop_back();
        }

        while (!otros.empty()) {
            res[ini] = otros.back();
            ini++;
            otros.pop_back();
        }

        for (int i=1; i<=n; i++) {
            cout<<res[i]<<' ';
            res[i] = 0;
        }
        cout<<'\n';
    }

    return 0;
}

/*



 */
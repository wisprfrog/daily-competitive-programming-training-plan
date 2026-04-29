//URL: https://codeforces.com/gym/106495/problem/E

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 1000005;
const int MOD = 10e9 + 7;

vector<int> factores(MAXN);
vector<pair<vector<int>, int>> nums;

void criba(int n) {
    for (ll i=2; i<=n; i++) {
        if (factores[i] == i) {
            for (ll j = i*i; j<=n; j+=i) factores[j] = i;
        }
    }
}

void ordenar(int n) {
    nums.push_back({{}, 1});
    for (int i=2; i<=n; i++) {
        nums.push_back({{}, i});
        int pos = i;
        while (factores[pos] > 1) {
            nums.back().first.push_back(factores[pos]);
            pos /= factores[pos];
        }
        sort(nums.back().first.begin(), nums.back().first.end());
    }

    sort(nums.begin(), nums.end());
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin>>n>>t;

    for (int i=2; i<=n; i++) factores[i] = i;
    criba(n);
    ordenar(n);

    while (t--) {
        int q;
        cin>>q;

        cout<<nums[q-1].second<<'\n';
    }

    return 0;
}

/*



 */
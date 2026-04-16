//URL: https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

ll arr[MAXN], n;
ll menor = LLONG_MAX;

void solve(int pos, ll grupo1, ll grupo2) {
    if (pos > n) {
        menor = min(menor, abs(grupo1 - grupo2));
        return;
    }

    solve(pos+1, grupo1+arr[pos], grupo2);
    solve(pos+1, grupo1, grupo2+arr[pos]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;

    for (int i=1; i<=n; i++) cin>>arr[i];

    solve(1, 0, 0);

    cout<<menor<<'\n';

    return 0;
}

/*

1
5 50
00010

 */
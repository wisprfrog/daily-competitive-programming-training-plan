//URL: https://codeforces.com/problemset/problem/1106/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

ll arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) cin>>arr[i];
    sort(arr+1, arr+n+1);

    int pos = n;
    ll suma = 0;
    for (int i=1; i<pos; i++) {
        suma += pow(arr[i] + arr[pos], 2);
        pos--;
    }

    cout<<suma<<'\n';

    return 0;
}

/*



 */
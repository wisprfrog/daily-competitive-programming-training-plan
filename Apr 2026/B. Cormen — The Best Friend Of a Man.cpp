//URL: https://codeforces.com/problemset/problem/732/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;


int arr[505];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    int adicion = 0;
    for (int i=1; i<=n; i++) {
        cin>>arr[i];

        if (i > 1) {
            int suma = arr[i] + arr[i-1];
            int difer = k - suma;

            if (difer > 0) {
                adicion += difer;
                arr[i] += difer;
            }
        }
    }

    cout<<adicion<<'\n';
    for (int i=1; i<=n; i++) cout<<arr[i]<<' ';

    return 0;
}

/*



 */
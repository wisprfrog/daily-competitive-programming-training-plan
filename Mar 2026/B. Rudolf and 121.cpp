//URL: https://codeforces.com/problemset/problem/1941/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

int arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        bool puede = true;
        for (int i=1; i<=n-2 && puede; i++) {
            if (arr[i] > 0) {
                int cabe_ini = arr[i];
                int cabe_mitad = cabe_ini * 2;

                if (cabe_mitad <= arr[i+1] && cabe_ini <= arr[i+2]) {
                    arr[i] = 0;
                    arr[i+1] -= cabe_mitad;
                    arr[i+2] -= cabe_ini;
                }
                else puede = false;
            }
        }

        if (arr[n-1] > 0 || arr[n] > 0) puede = false;

        if (puede) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}

/*

1
3 4
0110
0110
0110

 */
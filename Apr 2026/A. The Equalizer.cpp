//URL: https://codeforces.com/problemset/problem/2217/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

int arr[505];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;

        int suma = 0;
        for (int i=1; i<=n; i++) {
            int num;
            cin>>num;

            suma += num;
        }

        int suma_k = n*k;

        if ((suma & 1) || (suma_k % 2 ==0)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*

1
5 50
00010

 */
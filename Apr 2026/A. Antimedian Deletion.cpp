//URL: https://codeforces.com/contest/2211/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

int arr[105];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        for (int i=1; i<=n; i++) cin>>arr[i];

        for (int i=1; i<=n; i++) cout<<(n < 3 ? n : 2)<<' ';
        cout<<'\n';
    }

    return 0;
}

/*

1
5 50
00010

 */
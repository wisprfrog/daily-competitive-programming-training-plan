//URL: https://codeforces.com/problemset/problem/2194/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;

    while (t--) {
        int n, w;
        cin>>n>>w;

        if (w == 1) cout<<"0\n";
        else cout<<n-(n/w)<<'\n';
    }

    return 0;
}

/*

1
5
01100
10101

 */
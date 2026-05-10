//URL: https://codeforces.com/problemset/problem/2172/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int e[4];
    cin>>e[1]>>e[2]>>e[3];

    sort(e+1, e+4);

    int difer = abs(e[1] - e[3]);
    if (difer >= 10) cout<<"check again";
    else cout<<"final "<<e[2];


    return 0;
}

/*



 */
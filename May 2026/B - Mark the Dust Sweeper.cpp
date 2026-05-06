//URL: https://codeforces.com/problemset/problem/1705/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200001;
const int MOD = 1e9 + 7;

int arr[100001];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        ll suma = 0;
        bool polvo = false;
        for(int i=1; i<=n; i++) {
            ll num;
            cin>>num;

            if (i < n) {
                if (num > 0) polvo = true;

                if (polvo) suma += (num == 0 ? 1 : num);
            }
        }

        cout<<suma<<'\n';
    }

    return 0;
}

/*

6
4
1 2 0 3 3 0 2 1
2
0 1 0 1
2
1 1 0 0
3
2 0 2 1 1 0
4
0 1 3 0 3 1 2 2
3
0 1 2 1 0 2


 */
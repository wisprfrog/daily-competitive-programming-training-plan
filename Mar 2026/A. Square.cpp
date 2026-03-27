//URL: https://codeforces.com/problemset/problem/2167/A

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
        set<int> nums;
        for (int i=1; i<=4; i++) {
            int num;
            cin>>num;

            nums.insert(num);
        }

        if (nums.size() == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*



 */
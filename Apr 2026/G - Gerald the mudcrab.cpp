//URL: https://codeforces.com/gym/106495/problem/G

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    set<int> nums;
    for (int i=1; i<=n; i++) {
        int num;
        cin>>num;

        nums.insert(num);
    }

    cout<<n-nums.size()<<'\n';

    return 0;
}

/*



 */
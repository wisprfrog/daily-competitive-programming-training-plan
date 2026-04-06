//URL: https://codeforces.com/problemset/problem/753/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    if (n == 1) cout<<"1\n1";
    else {
        int actual = 1;
        int acum = 0;
        vector<int> res;
        while (n-(acum+actual) >= actual+1){
            acum += actual;
            res.push_back(actual);
            actual++;
        }

        if (actual < n) res.push_back(n - acum);

        cout<<res.size()<<'\n';
        for (auto x : res) cout<<x<<' ';
    }

    return 0;
}

/*



 */
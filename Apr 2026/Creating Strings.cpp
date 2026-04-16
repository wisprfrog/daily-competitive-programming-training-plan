//URL: https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    sort(s.begin(), s.end());

    vector<string> permu;
    do {
        permu.push_back(s);
    }while (next_permutation(s.begin(), s.end()));

    cout<<permu.size()<<'\n';
    for (auto x : permu) cout<<x<<'\n';

    return 0;
}

/*

1
5 50
00010

 */
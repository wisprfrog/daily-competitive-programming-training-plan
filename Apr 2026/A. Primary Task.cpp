//URL: https://codeforces.com/problemset/problem/2000/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;


pair<int, int> arr[505];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {
        string a;
        cin>>a;

        bool puede = false;
        if (a.size() == 3 && a.substr(0, 2) == "10" && a[2] > '1') puede = true;
        if (a.size() >= 4 && a.substr(0, 2) == "10" && a[2] > '0') puede = true;

        if (puede)cout<<"YES\n";
        else cout<<"NO\n";
    }

    //(pos) = (num-i)/k
    //

    return 0;
}

/*



 */
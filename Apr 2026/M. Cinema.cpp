//URL: https://codeforces.com/gym/105387/problem/M

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

pair<pair<int, int>, int> arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin>>n;

    set<int> sobrantes;
    for (int i=1; i<=n; i++) cin>>arr[i].first.first;
    for (int i=1; i<=n; i++) {
        cin>>arr[i].first.second;
        arr[i].second = i;
        sobrantes.insert(i);
    }
    sort(arr+1, arr+n+1, greater<pair<pair<int, int>, int>>());

    vector<int> res(n+1, 0);

    ll suma = 0;
    for (int i=1; i<=n; i++) {
        if (arr[i].first.first != arr[i-1].first.first) {
            res[arr[i].second] = arr[i].first.first;
            sobrantes.erase(arr[i].first.first);
        }
        else suma += arr[i].first.second;
    }

    cout<<suma<<'\n';
    for (int i=1; i<=n; i++) {
        if (res[i] == 0) {
            cout<<*sobrantes.begin()<<' ';
            sobrantes.erase(sobrantes.begin());
        }
        else cout<<res[i]<<' ';
    }

    return 0;
}

/*

1
5
01100
10101

 */
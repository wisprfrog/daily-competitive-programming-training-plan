//URL: https://codeforces.com/problemset/problem/1243/B1

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 100005;
const int MOD = 998244353;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        string a, b;
        cin>>a>>b;

        bool puede = true;
        char a_ocupa = '_', b_ocupa = '_';
        bool una_oper = false;
        for (int i=0; i<n && puede; i++) {
            if (a[i] != b[i]) {
                if (a_ocupa == '_') {
                    a_ocupa = b[i];
                    b_ocupa = a[i];
                }else {
                    if (a_ocupa == b[i] && b_ocupa == a[i] && !una_oper) una_oper = true;
                    else puede = false;
                    //hay mas de 2 diferentes en las cadenas a y b o ya se realizo una operacion de cambio
                }
            }
        }

        if (a_ocupa != '_' && !una_oper) puede = false;
        //hay uno diferente y no se realizo la operacion

        if (puede) cout<<"Yes\n";
        else cout<<"No\n";
    }


    return 0;
}

/*

 */

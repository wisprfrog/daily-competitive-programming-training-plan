//URL: https://codeforces.com/contest/2204/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

ll m;

ull suma_x(ull x, ull y, ull z) {
    ull lcm_xy = x*y / __gcd(x, y);
    ull lcm_xz = x*z / __gcd(x, z);
    ull lcm_yz = y*z / __gcd(y, z);

    ull lcm_xyz = x*lcm_yz / __gcd(x, lcm_yz);

    ull divs_x = m/x;
    ull divs_xy = m/lcm_xy;
    ull divs_xz = m/lcm_xz;
    ull divs_xyz = m/lcm_xyz;

    ull llega_xyz = divs_xyz;
    ull llega_xy = divs_xy - llega_xyz;
    ull llega_xz = divs_xz - llega_xyz;
    ull llega_x = divs_x - llega_xy - llega_xz - llega_xyz;

    ull suma = llega_x*6 + (llega_xy + llega_xz)*3 + llega_xyz*2;

    return suma;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        ull a, b, c;
        cin>>a>>b>>c>>m;

        ull suma_a = suma_x(a, b, c);
        ull suma_b = suma_x(b, a, c);
        ull suma_c = suma_x(c, a, b);

        cout<<suma_a<<' '<<suma_b<<' '<<suma_c<<'\n';
    }


    return 0;
}

/*

1
3 4
0110
0110
0110

 */
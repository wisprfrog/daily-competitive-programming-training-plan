//URL: https://codeforces.com/gym/106495/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 300005;
const int MOD = 998244353;

string trans_num(string num) {
    int ceros = 0;
    for (int i=num.size()-1; i>=0; i--) {
        if (num[i] != '0') break;
        ceros++;
    }

    if (ceros >= 4) {
        string res;
        if (num[0] == '1' && ceros == num.size()-1) res = "10^{" + to_string(ceros) + "}";
        else {
            res += num[0];
            if (ceros != num.size()-1) res += "."; //si son puros ceros, no imprimir
            for (int i=1; i<num.size()-ceros; i++) res += num[i];
            res += "\\cdot10^{" + to_string(num.size()-1) + "}";
        }

        return res;
    }

    return num;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cin.ignore();

    for (int i=1; i<=n; i++) {
        string s;
        getline(cin, s);

        s += ' ';

        string aux;
        bool numero = true;
        for (int j=0; j<s.size(); j++) {
            if (s[j] != ' ') {
                if (!isdigit(s[j])) numero = false;

                aux += s[j];
            }
            else {
                if (numero) cout<<trans_num(aux);
                else cout<<aux;

                if (j < s.size()-1) {
                    cout<<' ';
                }

                aux = "";
                numero = true;
            }
        }
        cout<<'\n';
    }

    return 0;
}

/*


 */
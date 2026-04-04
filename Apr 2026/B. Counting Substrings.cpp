//URL: https://codeforces.com/edu/course/2/lesson/2/3/practice/contest/269118/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
const int MAXN = 200005;
const int MOD = 998244353;

vector<int> suffix, clases;

void radix_sort(vector<pair<pair<int, int>, int>> &arr) {
    int n = arr.size();

    {
        vector<int> cnt_sort(n);
        for (auto x : arr) {
            cnt_sort[x.first.second]++;
        }

        vector<pair<pair<int, int>, int>> arr_nuevo(n);
        vector<int> pos(n);
        pos[0] = 0;
        for (int i=1; i<n; i++) {
            pos[i] = pos[i-1] + cnt_sort[i-1];
        }

        for (auto x : arr) {
            int i = x.first.second;
            arr_nuevo[pos[i]] = x;
            pos[i]++;
        }

        arr = arr_nuevo;
    }
    {

        vector<int> cnt_sort(n);
        for (auto x : arr) {
            cnt_sort[x.first.first]++;
        }

        vector<pair<pair<int, int>, int>> arr_nuevo(n);
        vector<int> pos(n);
        pos[0] = 0;
        for (int i=1; i<n; i++) {
            pos[i] = pos[i-1] + cnt_sort[i-1];
        }

        for (auto x : arr) {
            int i = x.first.first;
            arr_nuevo[pos[i]] = x;
            pos[i]++;
        }

        arr = arr_nuevo;
    }
}

void crearSuffix(string &s, int &n) {
    {
        // k = 0;
        vector<pair<char, int>> arr(n);
        for (int i=0; i<n; i++) arr[i] = {s[i], i};
        sort(arr.begin(), arr.end());

        for (int i=0; i<n; i++) suffix[i] = arr[i].second;

        clases[suffix[0]] = 0;
        for (int i=1; i<n; i++) {
            if (arr[i].first != arr[i-1].first) clases[suffix[i]] = clases[suffix[i-1]] + 1;
            else clases[suffix[i]] = clases[suffix[i-1]];
        }
    }

    // k -> k+1
    int k = 0;

    vector<pair<pair<int, int>, int>> arr(n);
    while ((1<<k) < n) {
        for (int i=0; i<n; i++) {
            int izq = i;
            int der = (i + (1<<k)) % n;

            arr[i] = {{clases[izq], clases[der]}, i};
        }
        radix_sort(arr);

        for (int i=0; i<n; i++) suffix[i] = arr[i].second;

        clases[suffix[0]] = 0;
        for (int i=1; i<n; i++) {
            if (arr[i].first != arr[i-1].first) clases[suffix[i]] = clases[suffix[i-1]] + 1;
            else clases[suffix[i]] = clases[suffix[i-1]];
        }

        k++;
    }
}

string formar_sub(string &s, int &n, int pos, int tam_sub) {
    string sub;
    for (int i=1; i<=tam_sub; i++) {
        sub += s[pos];

        pos = (pos+1)%n;
    }

    return sub;
}

int lower_b(string &s, int &n, string &buscar) {
    int ini = 0, fin = n-1, buscar_tam = buscar.size(), res;
    while (ini <= fin) {
        int mit = (ini+fin)/2;

        string sub_mit = formar_sub(s, n, suffix[mit], buscar_tam);
        if (buscar <= sub_mit) fin = mit - 1;
        else ini = mit + 1;

        res = ini;
    }

    if (res < 0 || res > n-1 || buscar != formar_sub(s, n, suffix[res], buscar_tam)) res = -1;

    return res;
}

int upper_b(string &s, int &n, string &buscar) {
    int ini = 0, fin = n-1, buscar_tam = buscar.size(), res;
    while (ini <= fin) {
        int mit = (ini+fin)/2;

        string sub_mit = formar_sub(s, n, suffix[mit], buscar_tam);
        if (buscar < sub_mit) fin = mit - 1;
        else ini = mit + 1;

        res = fin;
    }

    if (res < 0 || res > n-1 || buscar != formar_sub(s, n, suffix[res], buscar_tam)) res = -1;

    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    s += '$';
    int n = s.size();

    suffix.resize(n);
    clases.resize(n);
    crearSuffix(s, n);

    // for (int i=0 ;i<n; i++) cout<<formar_sub(s, n, suffix[i], n)<<'\n';

    int t;
    cin>>t;
    while (t--) {
        string a;
        cin>>a;

        if (a.size() > n) cout<<"0\n";
        else {
            int low = lower_b(s, n, a);
            int upp = low == - 1 ? -1 : upper_b(s, n, a);

            if (low == -1) cout<<"0\n";
            else cout<<upp-low+1<<'\n';
        }
    }

    return 0;
}

/*



 */
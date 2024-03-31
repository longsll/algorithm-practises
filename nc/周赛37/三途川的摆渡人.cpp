#include <bits/stdc++.h>

#define x first
#define y second
#define pb push_back

using namespace std;

const int N = 2e5 + 10;
const int P = 1e9 + 7, INF = 0x3f3f3f3f;

typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    //f[i]为异或和为i需要的最小数量
    vector<int> f(201, INF); //选择尽可能少的位与为0

    for(int i = 0; i < n; i ++ ) 
        cin >> a[i];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end()) - a.begin();

    for(int i = 0; i < a.size(); i ++ ) {
        f[a[i]] = 1;
        for(int j = 0; j <= 200; j ++ )
            f[j & a[i]] = min(f[j & a[i]], f[j] + 1);
    }
    if(f[0] == INF) cout << "-1\n";
    else cout << n - f[0] << '\n';

}

int main() {
    int T = 1;
    cin >> T;
    while(T -- ) {
        solve();
    }
    return 0;
}
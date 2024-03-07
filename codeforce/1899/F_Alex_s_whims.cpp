#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int INF = 0x3f3f3f3f;
long long a[N], dp[N];

void solve()
{
    long long n , q;
    cin >> n >> q;
    int p = n-1;
    for (int i = 1; i < n; ++i) cout << i << ' ' << i + 1 << "\n";
    for (int i = 1, d; i <= q; ++i) {
        cin >> d;
        if(p == d) cout << "-1 -1 -1\n";
        else {cout << n << ' ' << p << ' ' << d << "\n"; p = d;}
    }
    return ;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
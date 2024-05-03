#include <bits/stdc++.h>
using namespace std;

int n, m, p, x;
void solve()
{
    cin >> n >> m >> p >> x;
    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            int a = x - i * j;
            int b = 2 * (i + j);
            if (a % b != 0)
                continue;
            int g = a / b;
            if (g >= 1 && g <= p)
                res++;
        }
    cout << res << endl;
}

signed main()
{
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;
int a[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n + n);
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        ans += (a[i] - a[i - 1]) + (a[i + n] - a[i + n - 1]);
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " " << a[i + n] << endl;
    }
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
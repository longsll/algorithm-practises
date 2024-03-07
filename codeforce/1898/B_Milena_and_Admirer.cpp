#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];

void solve()
{

    long long n, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] > a[i + 1])
        {
            res += ceil(1.0 * a[i] / a[i + 1]) - 1;
            a[i] = a[i] / ceil(1.0 * a[i] / a[i + 1]);
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
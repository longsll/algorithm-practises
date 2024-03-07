#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;

void solve()
{
    int n, k;
    cin >> n >>  k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int last = n - 1;
    for (int i = 0; i < min(k,n); i++)
    {
        if (a[last] > n)
        {
            cout << "No\n";
            return;
        }
        last += n - a[last];
        if (last >= n)
            last -= n;
    }
    cout << "Yes\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
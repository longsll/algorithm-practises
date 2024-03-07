#include <bits/stdc++.h>

using namespace std;
const int N = 3e5 + 10;
int l[N], r[N] , f[N];
char s[N];
int n;

int dfs(int u)
{
    if (l[u] == 0 && r[u] == 0)
        return 0;
    int left = dfs(l[u]), right = dfs(r[u]);
    if (s[u] == 'L')
    {
        right++;
        if (l[u] == 0)
            return right;
        else if (r[u] == 0)
            return left;
        return min(left, right);
    }
    else if (s[u] == 'R')
    {
        left++;
        if (l[u] == 0)
            return right;
        else if (r[u] == 0)
            return left;
        return min(left, right);
    }
    left++;
    right++;
    if (l[u] == 0)
    return right;
    else if (r[u] == 0)
    return left;
    return min(left, right);
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
    cout << dfs(1) << endl;
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
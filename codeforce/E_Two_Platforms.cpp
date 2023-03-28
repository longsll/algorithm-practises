#include <bits/stdc++.h>

using namespace std;
const int N = 200005;
int x[N], y, s[N], f[N];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> cnt;
        memset(s, 0, sizeof s);
        memset(f, 0, sizeof f);
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
            cnt[x[i]] = cnt[x[i]] + 1;
        }
        for (int i = 1; i <= n; i++)
            cin >> y;
        if (n <= k)
        {
            cout << n << endl;
            continue;
        }
        sort(x + 1, x + n + 1);
        int r = 0, len = 1, res = 1;
        for (int i = 1; i <= n; i++)
            if (x[i] != x[i - 1])
                s[len++] = x[i];
        len--;
        int c = 0, ma = 0;
        for (int i = 1; i <= len; i++)
        {
            if(r > len)break;
            while (r < len && s[r + 1] - s[i] <= k)
            {
                r++;
                c += cnt[s[r]];
            }
            f[r] = max(f[r], c);
            c -= cnt[s[i]];
            ma = max(ma, f[i - 1]);
            res = max(res, f[r] + ma);
        }
        cout << res << endl;
    }
    return 0;
}
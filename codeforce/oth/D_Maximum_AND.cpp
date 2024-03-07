#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, V = 30;
int a[N], b[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int T, n, i, j, ans;
    for (cin >> T; T--;)
    {
        cin >> n;
        for (i = 1; i <= n; ++i)
            cin >> a[i];
        for (i = 1; i <= n; ++i)
            cin >> b[i];
        sort(a + 1, a + n + 1, less<int>());
        sort(b + 1, b + n + 1, greater<int>());
        ans = 0;
        for (i = V; ~i; --i)
        {
            for (j = 1; j <= n; ++j)
                if ((a[j] & (1 << i)) == (b[j] & (1 << i)))
                    break;
            //有没满足条件
            if (j > n)
                ans |= 1 << i; // 贡献给答案
            else
            {
                for (j = 1; j <= n; ++j) // 推平成1
                    a[j] |= (1 << i), b[j] |= (1 << i);
                sort(a + 1, a + n + 1, less<int>()); // 重新排序，抹去这一位上原有对集合划分的影响
                sort(b + 1, b + n + 1, greater<int>());
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
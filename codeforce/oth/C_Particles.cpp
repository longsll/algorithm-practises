#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ll a = 0, b = 0, c = 0;
        ll mx = -2e9;
        for (int i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            mx = max(mx, v);
            if (v > 0)
            {
                if (i & 1)
                {
                    a += v;
                    c = 1;
                }
                else
                {
                    b += v;
                    c = 1;
                }
            }
        }
        ll ans = 0;
        if (c)
            ans = max(max(a, b), mx);
        else
            ans = mx;

        cout << ans << '\n';
    }

    return 0;
}
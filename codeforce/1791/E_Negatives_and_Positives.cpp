#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 200005;
ll solve()
{
    int n ,a;
    cin >> n;
    ll cnt = 0, ans = 0;
    int minnum = 0x3f3f3f3f;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans += abs(a);
        minnum = min(minnum, abs(a));
        if (a < 0)
            cnt++;
    }
    if (cnt % 2 == 0 || minnum == 0)
        return ans;
    else
        return ans - 2 * minnum;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << solve() << endl;
    }
    return 0;
}

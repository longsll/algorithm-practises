#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
long long a[N], s[N];

vector<int> get_divisors(int x)
{
    vector<int> res;
    for (int i = 1; i <= x / i; i++)
        if (x % i == 0)
        {
            res.push_back(i);
            if (i != x / i)
                res.push_back(x / i);
        }
    sort(res.begin(), res.end());
    return res;
}

void solve()
{
    long long n, maxn = -0x3f3f3f3f, minn = 0x3f3f3f3f , ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    vector<int> res = get_divisors(n);
    for (auto x : res)
    {
        if(x == n)continue;
        maxn = -0x3f3f3f3f3f3f3f3f, minn = 0x3f3f3f3f3f3f3f3f;
        for(int i = x; i <= n ; i += x){
            minn = min(minn , s[i] - s[i - x]);
            maxn = max(maxn , s[i] - s[i - x]);
        }
        ans = max(ans , maxn - minn);
    }
    cout << ans << endl;
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
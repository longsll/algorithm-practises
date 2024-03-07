#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
int a[N];
ll s[N];

int main()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    ll ans = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        while (j <= n && (s[j] - s[i - 1] < k))
        {
            j++;
        }
        ans += n - j + 1;
    }
    cout << ans << endl;
    return 0;
}
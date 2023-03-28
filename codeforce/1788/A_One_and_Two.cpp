#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;
int a[N], b[N], c[N];

int solve()
{
    int n;
    cin >> n;
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
            b[i] = b[i - 1] + 1;
        else
            b[i] = b[i - 1];
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == 2)
            c[i] = c[i + 1] + 1;
        else
            c[i] = c[i + 1];
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == c[i + 1])
            return i;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << solve() << "\n";
    }
    return 0;
}
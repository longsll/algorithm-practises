#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

int a[N], b[N];
int dp[N];
int n, m, x;

int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        b[x] = 1;
    }
    cin >> x;
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        if (b[i])
            continue;
        for (int j = 1; j <= n; j++)
        {
            if (i - a[j] >= 0 && dp[i - a[j]])
            {
                dp[i] = 1;
                break;
            }
        }
    }
    if (dp[x])
        puts("Yes");
    else
        puts("No");
    return 0;
}
#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;
const int N = 200010, M = N * 2;

int h[N], w[M], e[M], ne[M], idx;
int dp[N];

void add(int a, int b, int c)
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void dfs1(int u, int f)
{
    for (int i = h[u]; ~i; i = ne[i])
    {
        int j = e[i];
        if (j == f)
            continue;
        dfs1(j, u);
        dp[u] += dp[j] + w[i];
    }
}

void dfs2(int u, int f)
{
    for (int i = h[u]; ~i; i = ne[i])
    {
        int j = e[i];
        if (j == f)
            continue;
        if (w[i])
            dp[j] = dp[u] - 1;
        else
            dp[j] = dp[u] + 1;
        dfs2(j, u);
    }
}

void init()
{
    memset(h, -1, sizeof h);
}

int main()
{
    init();
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        add(a, b, 0);
        add(b, a, 1);
    }
    dfs1(1, -1);
    dfs2(1 , -1);
    int Min=99999999;
        for (int i=1;i<=n;i++) if (Min>dp[i]) Min=dp[i];
        printf("%d\n",Min);
        for (int i=1;i<=n;i++) if (Min==dp[i]) printf("%d ",i);
        printf("\n");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
const int N = 2010;
int step[N][N];
bool g[N][N];
int wx[4] = {-1, 1, 0, 0};
int wy[4] = {0, 0, 1, -1}; 

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i ++ )
        for (int j = 1; j <= m; j ++ )
        {
            char c;
            cin >> c;
            if (c == '#') g[i][j] = 1;
        }

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    memset(step, -1, sizeof step);
    step[sx][sy] = 0;
    if (sx == tx && sy == ty) return 0 & puts("0"); 

    queue<PII> q;
    q.push({sx, sy});

    while (q.size())
    {
        auto t = q.front();
        q.pop();

        for (int i = 0; i < 4; i ++ )
            for (int j = 1; j <= k; j ++ )
            {
                int dx = t.first + wx[i] * j; 
                int dy = t.second + wy[i] * j; 

                if (g[dx][dy] || dx < 1 || dx > n || dy < 1 || dy > m) break;
                if (step[dx][dy] != -1 && step[dx][dy] <= step[t.first][t.second]) break;
                if (step[dx][dy] != -1) continue;

                step[dx][dy] = step[t.first][t.second] + 1;
                q.push({dx, dy});
                if (dx == tx && dy == ty)
                {
                    printf("%d", step[tx][ty]);
                    return 0;
                }
            }
    }

    puts("-1");

    return 0;
}
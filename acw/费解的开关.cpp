#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
char g[6][6], p[6][6];
int dx[5] = {-1, 0, 1, 0, 0}, dy[5] = {0, 1, 0, -1, 0};

void turn(int x, int y)
{
    for (int i = 0; i < 5; i++)
    {
        int a = x + dx[i], b = y + dy[i];
        if (a < 0 || a >= 5 || b < 0 || b >= 5)
            continue;
        g[a][b] ^= 1;
    }
}
int main()
{
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 5; i++)
            scanf("%s", g[i]);
        int res = 10;
        for (int op = 0; op < 1 << 5; op++)
        {
            int step = 0;
            memcpy(p, g, sizeof g);// g -> p
            for (int j = 0; j < 5; j++)
            {
                if (op >> j & 1)
                {
                    step++;
                    turn(0, j);
                }
            }

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (g[i][j] == '0')
                    {
                        turn(i + 1, j);
                        step++;
                    }
                }
            }

            bool f = true;

            for (int i = 0; i < 5; i++)
            {
                if (g[4][i] == '0')
                    f = false;
            }
            if (f)
                res = min(res, step);
            memcpy(g, p, sizeof g);// p -> g
        }
        if (res > 6)
            res = -1;
        cout << res << endl;
    }
    return 0;
}

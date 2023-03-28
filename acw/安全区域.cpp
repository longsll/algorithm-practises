#include <iostream>

using namespace std;
const int N = 100005;
int n, m;
int stx[N], sty[N];
int main()
{
    cin >> n >> m;
    long long res = (long long)n * n;
    int xline = 0, yline = 0;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (stx[x] == 0 && sty[y] == 0)
        {
            res -= (2 * n - 1);
            res += xline + yline;
            xline++, yline++;
        }
        else if (stx[x] == 1 && sty[y] == 0)
        {
            res -= (n - 1);
            res += (xline - 1);
            yline++;
        }
        else if (stx[x] == 0 && sty[y] == 1)
        {
            res -= (n - 1);
            res += (yline - 1);
            xline++;
        }
        stx[x] = 1, sty[y] = 1;
        cout << res << " ";
    }
    return 0;
}

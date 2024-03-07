#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, vis[N];
void work()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        vis[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 1)
            continue;
        vis[i] = 1;
        cout << i << " ";
        int tmp = i;
        while (tmp * 2 <= n)
        {
            tmp *= 2;
            cout << tmp << " ";
            vis[tmp] = 1;
        }
    }
    cout << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
        work();
    return 0;
}

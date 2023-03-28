#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        int a1 = (3 * n + 3) / 2;
        puts("YES");
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " " << a1 - i << " \n";
            a1++;
        }
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " " << a1 - i << " \n";
            a1++;
        }
    }
    else
    {
        puts("NO");
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
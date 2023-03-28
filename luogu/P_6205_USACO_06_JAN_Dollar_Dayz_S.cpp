#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;
__int128 dp[N];
ll n, m;
inline void write(__int128 x)
{
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
int main()
{
    cin >> m >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= m ; j++)
        {
            dp[j] += dp[j - i];
        }
    }
    write(dp[m]);
    return 0;
}
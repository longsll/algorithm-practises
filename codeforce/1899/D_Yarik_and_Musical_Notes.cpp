#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int INF = 0x3f3f3f3f;
long long a[N], dp[N];

void solve()
{
    long long n , ans = 0;
    cin >> n;
    map<int,int> m;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        ans += m[a[i]] ++;
    }
    ans += 1LL * m[1] * m[2];
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
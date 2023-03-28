#include <bits/stdc++.h>

using namespace std;
const int N = 100005;
int n, m;
long long s[N];
long long dp[N][3];
int maxi;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        maxi = max(maxi,t);
        s[t]++;
    }
    for (int i = 1; i <= maxi; i++)
    {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = dp[i - 1][0] + i * s[i];
    }
    cout << max(dp[maxi][0], dp[maxi][1]);
    return 0;
}

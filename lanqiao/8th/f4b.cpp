#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 100005;
int n,k;
int s[N];
int dp[N][1];
int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++)cin >> s[i];
    sort(s + 1 ,s + n  + 1);
    int last = 0;
    for(int i = 1 ; i <= n ; i ++){
        dp[i][0] = max(dp[i - 1][0] , dp[i - 1][1]);
        int j = 1;
        while(s[i] - s[i - j] == k)j ++;
        dp[i][1] = dp[i - j][1]+ 1;
    }
    cout << max(dp[n][0],dp[n][1]);
    return 0;
}

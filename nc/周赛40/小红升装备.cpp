#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e3 + 10;
ll dp[N][N];
ll first[N] , second[N] , a[N] , b[N] , maxlev[N];
int main()
{
    int n , x;
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i ++){
        cin >> first[i] >> a[i] >> b[i] >> second[i] >> maxlev[i];
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 0 ; j <= x ; j ++){
            dp[i][j] = max(dp[i - 1][j] , dp[i][j]);
            if(j >= a[i])dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i]] + first[i]);
            for(int k = 1 ; ; k ++){
                if(j < a[i] + (k * b[i]))break;
                if(k > maxlev[i])break;
                dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i] - (k * b[i])] + first[i] + k * second[i]);
            }
        }
    }
    ll ans = 0;
    for(int i = 0 ; i <= x ; i ++)ans = max(ans , dp[n][i]);
    cout << ans;
    return 0;
}
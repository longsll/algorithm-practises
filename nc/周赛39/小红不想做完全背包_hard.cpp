#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , p;
    cin >> n >> p;
    vector<long long> a(n + 10);
    //dp[i]表示对p取余等于i需要的最小个数
    vector<long long> dp(p + 10 , 1e18);
    for(int i = 1 ; i <= n  ; i ++){
        cin >> a[i];
        a[i] %= p;
        dp[a[i]] = 1;
        for(int j=p-1;j>=0;j--)
        {
            int ne=(j-a[i]+p)%p;
            dp[j]=min(dp[ne]+1,dp[j]);
        }
    }
    cout << dp[0];
    return 0;
}
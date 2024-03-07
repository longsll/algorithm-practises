#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int INF = 0x3f3f3f3f;
long long a[N], dp[N];

bool check(long long x , long long y){
    if(x&1){
        if(y&1)return false;
        else return true;
    }else{
        if(y&1)return true;
        else return false;
    }
    return 0;
}

void solve()
{
    long long n , ans = -INF;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    dp[1] = a[1];
    for(int i = 2 ; i <= n ; i ++){
        dp[i] = a[i];
        if(check(a[i] , a[i - 1])){
            dp[i] = max(dp[i] , dp[i-1] + a[i]);
        }
    }
    for(int i = 1 ; i <= n ; i ++){
        ans = max(ans , dp[i]);
    }
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
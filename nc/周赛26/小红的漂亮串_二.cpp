#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
const int mod = 1e9 + 7;
long long dp[N][7]; // 第一维表示当前字符串长度，第二维表示 7 种状态 
void pre() 
{
    dp[1][0] = 25; // 状态0：表示当前没有一个 red，且当前位置不是 r 的种类数
    dp[1][1] = 1; // 状态1：表示当前没有一个 red，且当前位置是 r 的种类数 
    dp[1][2] = 0; // 状态2：表示当前没有一个 red，且当前位置是 re 的种类数 
    dp[1][3] = 0; // 状态3：表示到当前位置为止有一个 red，且当前位置是非后续状态的种类数 
    dp[1][4] = 0; // 状态4：表示当前有一个 red，且当前位置是 r 的种类数 
    dp[1][5] = 0; // 状态5：表示当前有一个 red，且当前位置是 re 的种类数 
    dp[1][6] = 0; // 状态6：表示到当前位置为止有两个 red 的种类数 
}
void solve()
{
    int n;
    cin >> n;
    pre();
    for(int i = 2; i <= n; i++)
    {
        // 状态0 可以从 状态0加上非r字母 转移而来：dp[i-1][0]*25 
        // 状态0 可以从 状态1加上非r非e字母 转移而来：dp[i-1][1]*24 
        // 状态0 可以从 状态2加上非r非d字母 转移而来：dp[i-1][2]*24 
        dp[i][0] = ((dp[i-1][0]*25)%mod + (dp[i-1][1]*24)%mod + (dp[i-1][2]*24)%mod)%mod;
         
        // 状态1 可以从 状态0加上r字母 转移而来：dp[i-1][0] 
        // 状态1 可以从 状态1加上r字母 转移而来：dp[i-1][1] 
        // 状态1 可以从 状态2加上r字母 转移而来：dp[i-1][2] 
        dp[i][1] = (dp[i-1][0]%mod + (dp[i-1][1])%mod + (dp[i-1][2])%mod)%mod;
         
        // 状态2 可以从 状态1加上e字母 转移而来：dp[i-1][1] 
        dp[i][2] = dp[i-1][1]%mod;
         
        // 状态3 可以从 状态2加上d字母 转移而来：dp[i-1][2] 
        // 状态3 可以从 状态3加上非r字母 转移而来：dp[i-1][3]*25 
        // 状态3 可以从 状态4加上非r非e字母 转移而来：dp[i-1][4]*24 
        // 状态3 可以从 状态5加上非r非d字母 转移而来：dp[i-1][5]*24 
        dp[i][3] = (dp[i-1][2]%mod + (dp[i-1][3]*25)%mod + (dp[i-1][4]*24)%mod + (dp[i-1][5]*24)%mod)%mod;
         
        // 状态4 可以从 状态3加上r字母 转移而来：dp[i-1][3] 
        // 状态4 可以从 状态4加上r字母 转移而来：dp[i-1][4] 
        // 状态4 可以从 状态5加上r字母 转移而来：dp[i-1][5] 
        dp[i][4] = (dp[i-1][3]%mod + dp[i-1][4]%mod + dp[i-1][5]%mod)%mod;
         
        // 状态5 可以从 状态4加上e字母 转移而来：dp[i-1][4] 
        dp[i][5] = dp[i-1][4]%mod;
         
        // 状态6 可以从 状态5加上d字母 转移而来：dp[i-1][5] 
        // 状态6 可以从 状态6加上任意字母 转移而来：dp[i-1][6]*26 
        dp[i][6] = (dp[i-1][5]%mod + (dp[i-1][6]*26)%mod)%mod;
    }
    // 输出长度为 n 时，状态 6（即至少两个 red）的种类数 
    cout << dp[n][6]%mod << endl;
}
int main()
{
    int T = 1;
    while(T --){
        solve();
    }
    return 0;
}
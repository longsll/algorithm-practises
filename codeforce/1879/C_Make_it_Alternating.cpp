#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;
const int MOD = 998244353;
long long a[N];

void solve()
{
    string s;
    cin >> s;
    long long ans = 0 , res = 1 , n = s.size(),cur = 1;
    for(int i = 1 ; i < n ; i ++){
        if(s[i] != s[i - 1]){
            ans += cur - 1;
            res = res * cur % MOD;
            cur = 0;
        }
        cur ++;
    }
    if(cur > 1){
        ans += cur - 1; 
        res = res * cur % MOD;
    }
    res =(res * a[ans])%MOD;
    cout << ans <<" " << res << endl;
}

int main()
{
    int T;
    cin >> T;
    a[0] = 1,a[1] = 1;
    for(int i = 2 ; i <= 2e5 ; i ++){
        a[i] = (a[i - 1] * i) % MOD;
    }
    while(T--){
        solve();
    }
    return 0;
}
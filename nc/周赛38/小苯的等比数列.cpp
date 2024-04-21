#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    int maxn = -1e9;
    unordered_map<long long,long long>m;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        m[a[i]] ++;
        maxn = max(maxn , a[i]);
    }
    long long ans = 0;
    for(auto x : m){
        ans = max(ans , x.second);
    }
    for (int i = 1;i <= n;i++){    //枚举首项
        for(int j = 2; a[i] * pow(j,ans) <= maxn;j++){//枚举公比
            long long now = j,cnt = 1;
            while(m[a[i]*now] && a[i]*now <= maxn){
                cnt++;
                now *= j;
            }
            ans = max(cnt,ans);
        }
    }
    cout << ans << endl;
    return 0;
}
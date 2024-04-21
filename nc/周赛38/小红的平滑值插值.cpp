#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n , k;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    long long ans = 0 , f = -1;
    for(int i = 2 ; i <= n ; i ++){
        int d = abs(a[i] - a[i - 1]);
        f = max(f , d);
        if(d > k){
            if(d % k == 0)ans += d / k - 1;
            else ans += d / k;
        }
    }
    if(f < k){
        ans = 1;
    }
    cout << ans;
    return 0;
}
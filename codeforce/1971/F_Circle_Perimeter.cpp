#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int T;
    cin >> T;
    while(T --){
        ll x;
        cin >> x;
        ll l = x * x , r = (x + 1)*(x + 1);
        ll ans = 0;
        for(ll i = 0 ; i <= x ; i ++){
            ll aa = 0 , bb = x + 1;
            while(aa < bb){
                ll mid = (aa + bb) >> 1;
                if(mid * mid + i * i < l)aa = mid + 1;
                else bb = mid;
            }
            ll aaa = 0 , bbb = x + 1;
            while(aaa < bbb){
                ll mid = (aaa + bbb + 1) >> 1;
                if(mid * mid + i * i >= r)bbb = mid - 1;
                else aaa = mid;
            }
            if(i == 0){
                ans += (aaa - aa + 1) * 2;
            }else{
                ans += (aaa - aa + 1) * 4;
            }
            if(aa == 0){
                ans -= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
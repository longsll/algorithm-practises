#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 1 ; ; i ++){
        if((i * i) > 1e12)break;
        v.push_back(i * i);
    }
    ll ans = 1e12;
    for(int i = 0 ; i < v.size() ; i ++){
        ll dist = abs(v[i] - n);
        if(dist % 2 == 0){
            ans = min(ans , dist / 2);
        }
    }
    cout << ans;
    return 0;
}
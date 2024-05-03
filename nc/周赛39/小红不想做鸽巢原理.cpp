#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll sum = 0;
    int n , k;
    cin >> n >> k;
    vector<int> a(n + 10);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        sum += a[i]; 
    }
    sort(a.begin(), a.end() , greater<int>());
    int ans = 0;
    if(sum % k != 0){
        int left = sum % k;
        for(int i = 0 ; i < n ; i ++){
            if(left > 0)ans ++;
            else break;
            left -= a[i];
        }
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
map<int,int> m;
int main()
{
    int n , k;
    cin >> n >> k;

    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        m[a[i] % k] ++;
    } 
    int ans = -1;
    for(auto x : m){
        ans = max(ans , x.second);
    }
    cout << ans << endl;
}
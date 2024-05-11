#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
 
using namespace std;
 
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, priority_queue<int>> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]>>2].push(-a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << -mp[a[i]>>2].top() << " ";
        mp[a[i]>>2].pop();
    }
    cout << endl;
}
 
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
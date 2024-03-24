#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    map<int , int> m;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        m[a[i]] ++;
    }
    int cur = 1;
    int ans = 0;
    vector<pair<int , int>> v;
    for(int i = 0 ; i < n ; i ++){
        if(a[i] > n || m[a[i]] > 1){
            while(m.find(cur) != m.end()){     
                cur ++;
            }
            m[cur] ++;
            ans ++;
            v.emplace_back(i + 1 , cur);
        }
        m[a[i]] -- ;
    }
    cout << ans << endl;
    for(auto [x , y] : v){
        cout << x << " " << y << endl;
    }
    return 0;
}
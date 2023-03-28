#include <bits/stdc++.h>

using namespace std;
const int N = 200005;
int p[N] , q[N];
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    memset(p ,0,sizeof p);
    memset(q ,0,sizeof q);
    p[0] = 1;
    unordered_map<char,int> m1;
    m1[s[0]]++;
    for(int i = 1 ; i < n ; i ++){
        if(m1[s[i]])p[i] = p[i - 1];
        else{
            m1[s[i]] = 1;
            p[i] = p[i - 1] + 1;
        }
    }
    q[n - 1] = 1;
    unordered_map<char,int> m2;
    m2[s[n - 1]]++;
    for(int i = n - 2 ; i >= 0 ; i --){
        if(m2[s[i]])q[i] = q[i + 1];
        else{
            m2[s[i]] = 1;
            q[i] = q[i + 1] + 1;
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n - 1; i ++){
        ans = max(ans , p[i] + q[i + 1]);
    }
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

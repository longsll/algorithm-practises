#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool f = true;
    for(int i = 1 ; i < n ; i ++){
        if(s[i] != s[i - 1]){
            if(s[i] < s[i - 1])f = false;
        }
    }
    if(f)cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    int T = 1;
    // cin >> T;
    while(T --){
        solve();
    }
    return 0;
}
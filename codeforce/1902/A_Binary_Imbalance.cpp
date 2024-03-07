#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int c0 = count(s.begin() , s.end() , '0') , c1 = count(s.begin() , s.end() , '1');
    if(c0 > 0){
        cout << "YES\n";
        return ;
    }
    cout << "NO\n";
    return ;
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
    return 0;
}
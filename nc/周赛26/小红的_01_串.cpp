#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
void solve()
{
    string s;
    cin >> s;
    int c1 = count(s.begin() , s.end() , '0');
    int c2 = count(s.begin() , s.end() , '1');
    if(c1 == 0 || c2 == 0){
        cout << "Yes\n";
        return ;
    }
    if(c1 % 2 == 0 || c2 % 2 == 0){
        cout << "Yes\n";
        return ;
    }
    cout << "No\n";
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
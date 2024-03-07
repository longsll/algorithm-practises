#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a = s.find('1') , b = s.find('3');
    if(a > b)cout << "31\n";
    else cout << "13\n";
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
}
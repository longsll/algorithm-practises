#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a , b , c;
    cin >> a >> b >> c;
    if((b+c)%2)cout << "0 ";
    else cout << "1 ";
    if((a+c)%2)cout << "0 ";
    else cout << "1 ";
    if((b+a)%2)cout << "0 ";
    else cout << "1 ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
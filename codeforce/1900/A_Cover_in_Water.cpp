#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k = 0;
    cin >> n;
    string s, t = "...";
    cin >> s;
    auto it = search(s.begin(), s.end(), t.begin(), t.end());
    if (it != s.end())cout << "2\n";
    else cout << count(s.begin() , s.end() , '.') << endl;
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
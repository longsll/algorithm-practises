#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int x = 0, y = 0, f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int d = s[i] - '0';
        if (d % 2 == 0)
        {
            x = x * 10 + (d / 2);
            y = y * 10 + (d / 2);
            continue;
        }
        if (f & 1)
        {
            x = x * 10 + (d / 2);
            y = y * 10 + ((d + 1) / 2);
            f++;
        }
        else
        {
            x = x * 10 + ((d + 1) / 2);
            y = y * 10 + (d / 2);
            f ++;
        }
    }
    cout << x << " " << y << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}
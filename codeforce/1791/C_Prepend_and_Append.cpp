#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    for (; i < j; i++, j--)
    {
        if (s[i] == '0' && s[j] == '0')
            break;
        else if (s[i] == '1' && s[j] == '1')
            break;
    }
    cout << j - i + 1<< endl;
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

#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;

int a[N];

void solve()
{
    int n;
    unordered_map<int, int> m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int s1 = -1, s2 = -1, cnt = 0;
    for (auto &&[x, y] : m)
    {
        if (y >= 2)
        {
            if (s1 == -1)
                s1 = x;
            else
                s2 = x;
            cnt++;
            if (cnt == 2)
                break;
        }
    }
    if (cnt < 2)
    {
        cout << "-1\n";
        return;
    }
    vector<int> k(5);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == s1)
        {
            if (k[1] == 0)
            {
                cout << "1 ";
                k[1] = 1;
            }
            else if (k[2] == 0)
            {
                cout << "2 ";
                k[2] = 1;
            }
            else
                cout << "1 ";
        }
        else if (a[i] == s2)
        {
            if (k[3] == 0)
            {
                cout << "1 ";
                k[3] = 1;
            }
            else if (k[4] == 0)
            {
                cout << "3 ";
                k[4] = 1;
            }
            else
                cout << "1 ";
        }
        else
        {
            cout << "1 ";
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
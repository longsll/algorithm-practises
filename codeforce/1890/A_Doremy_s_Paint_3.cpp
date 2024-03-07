#include <bits/stdc++.h>

const int N = 105;
int a[N];

void solve()
{
    int n;
    std::cin >> n;
    std::unordered_map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i];
        m[a[i]]++;
    }

    if (m.size() > 2)
    {
        std::cout << "No\n";
        return;
    }
    else if (m.size() < 2)
    {
        std::cout << "Yes\n";
        return;
    }

    int a = 0, b = 0;
    for (auto x : m)
    {
        if (a == 0)
            a = x.second;
        else
            b = x.second;
    }
    if (abs(a - b) <= 1)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
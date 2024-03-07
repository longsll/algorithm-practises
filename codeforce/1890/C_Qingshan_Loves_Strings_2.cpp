#include <bits/stdc++.h>
std::string t = "01";
void solve()
{
    std::string s;
    std::vector<int> res;
    int n;
    std::cin >> n >> s;
    int l = 0, r = n - 1;
    if (n % 2)
    {
        std::cout << "-1\n";
        return;
    }
    while (l < r)
    {
        if (s[l] == s[r])
        {
            if (s[l] == '0')
                res.push_back(r + 1), s.insert(r + 1, t);
            else
                res.push_back(l), s.insert(l, t);
            r += 2;
        }
        l++, r--;
        if (res.size() > 300)
        {
            std::cout << "-1\n";
            return;
        }
    }
    std::cout << res.size() << std::endl;
    for (auto x : res)std::cout << x << " ";
    std::cout << std::endl;
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
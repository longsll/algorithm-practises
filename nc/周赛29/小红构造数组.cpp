#include <bits/stdc++.h>
using namespace std;
#define int long long
// O(sqrt(n))分解n
// O(nlogn) 分解 1到n所有数
signed main()
{
    int n, i;
    map<int, int> m; // 记录每个素因子出现的次数。
    cin >> n;
    if (n == 1)
        return cout << -1, 0;
    for (i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            m[i]++;
            n /= i;
        }
    }
    if (n > 1)
        m[n]++;
    set<pair<int, int>> s;
    int sum = 0, ma = 0;
    for (auto i : m)
    {
        sum += i.second;
        ma = max(ma, i.second);
        s.insert({i.second, i.first});
    }
    if (ma - 1 > sum - ma)
        return cout << -1, 0;
    /*
    第一步：找到最大值和次大值（出现次数）。
    只要最大值和次大值不等，用一个最大值，再用一个前面的。
    */
    cout << sum << '\n';
    if (s.size() == 1)
    {
        cout << (*(s.begin())).second << '\n';
        return 0;
    }
    while (sum > 0)
    {
        auto temp = *s.rbegin();
        s.erase(temp);
        auto temp2 = *s.rbegin();
        s.erase(temp2);
        if (temp.first != temp2.first)
        {
            cout << temp.second << " ";
            temp.first--;
            if (temp.first)
            {
                cout << temp2.second << " ";
                temp2.first--;
            }
            else
                break;
            s.insert(temp);
            s.insert(temp2);
        }
        else
        {
            s.insert(temp);
            s.insert(temp2);
            break;
        }
        sum--;
    }
    vector<pair<int, int>> v;
    for (auto i : s)
    {
        v.push_back(i);
    }
    while (1)
    {
        int jud = 0;
        for (i = v.size() - 1; i >= 0; i--)
        {
            if (v[i].first)
            {
                cout << v[i].second << " ";
                v[i].first--;
                jud = 1;
            }
        }
        if (!jud)
            break;
    }
}
#include <bits/stdc++.h>
#include <map>

using namespace std;
string a[1005];
unordered_map<string, int> s;
int res;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        string t;
        cin >> t;
        s[t] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        string t = a[i].substr(3, 3);
        if(s[t])res += s[t];
    }
    cout << res;
    return 0;
}
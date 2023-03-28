#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.begin() + m);
    for (int i = 0; i < m; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}
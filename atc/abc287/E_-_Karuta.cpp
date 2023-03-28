#include <bits/stdc++.h>
#include <map>

using namespace std;
const int N = 500005;
int n;
string d[N];
string p[N];
unordered_map<string, int> s;
int lcp(string a, string b)
{
    int len = 0;
    for (int i = 0; i < min(a.length(), b.length()); i++)
    {
        if (a[i] == b[i])
            len++;
        else
            break;
    }
    return len;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        p[i] = d[i];
        s[d[i]] = 0;
    }
    sort(d, d + n);
    s[d[0]] = lcp(d[0], d[1]);
    for (int i = 1; i < n - 1; i++)
    {
        s[d[i]] = max(lcp(d[i], d[i - 1]), lcp(d[i], d[i + 1]));
    }
    s[d[n - 1]] = lcp(d[n - 1], d[n - 2]);
    for (int i = 0; i < n; i++)
    {
        cout << s[p[i]] << endl;
    }
    return 0;
}
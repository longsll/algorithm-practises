#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
string get_min(string b, int m)
{
    char a[N];
    for (int i = 0; i < 2 * m; i++)
        a[i] = b[i % m];

    int i = 0, j = 1, k;
    while (i < m && j < m)
    {
        for (k = 0; k < m && a[i + k] == a[j + k]; k++)
            ;
        if (k == m)
            break;

        if (a[i + k] > a[j + k])
        {
            i += k + 1;
            if (i == j)
                i++;
        }
        else
        {
            j += k + 1;
            if (i == j)
                j++;
        }
    }

    k = min(i, j);

    for (i = 0; i < m; i++)
        b[i] = a[i + k];
    return b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        map<string, string> mi;
        vector<string> v;
        v.push_back(" ");
        while (n--)
        {
            string s;
            string t;
            cin >> s;
            v.push_back(s);
            t = get_min(s, m);
            mi[s] = t;
        }
        int Q;
        cin >> Q;
        while (Q--)
        {
            int a, b;
            cin >> a >> b;
            if (mi[v[a]] == mi[v[b]])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
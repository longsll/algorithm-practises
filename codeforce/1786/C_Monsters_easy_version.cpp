#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5;
typedef long long ll;
int a[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll res = 0;
    int j ;
    if(a[0] == 1)j = 1;
    else j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > j)
        {
            j ++;
            res += (a[i] - j);
        }
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}
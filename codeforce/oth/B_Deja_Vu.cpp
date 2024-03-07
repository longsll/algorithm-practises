#include <bits/stdc++.h>

using namespace std;

long long qp[31] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};
long long book[31];

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        if (book[x])
            continue;
        book[x] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % qp[x] == 0)
            {
                a[i] += qp[x - 1];
            }
        }
    }
    memset(book, 0, sizeof(book));
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
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
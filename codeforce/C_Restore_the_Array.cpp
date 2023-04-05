#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 2e5;
int a[N], res[N];
int main()
{
    int n, T;
    cin >> T;
    while (T--)
    {
        scanf("%d", &n);
        n--;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            res[i] = min(a[i], a[i - 1]);
        }
        if (a[0] > res[1])
            res[0] = a[0];
        else res[0] = 0;
        if (a[n - 1] > res[n - 1])
            res[n] = a[n - 1];
        else res[n] = 0;
        for (int i = 0; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
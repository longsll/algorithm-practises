#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];

void solve()
{
    double n, d, h;
    cin >> n >> d >> h;
    double sum = 0;
    sum += ((d * h) / 2) * n;
    double k = h / (d / 2);

    int last;
    cin >> last;
    for (int i = 1; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur - last >= h)
        {
            last = cur;
            continue;
        }
        double x = abs((cur - last - h) / k);
        double te = x * (h - (cur - last));
        sum -= te;
        last = cur;
    }
    printf("%lf\n", sum);
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
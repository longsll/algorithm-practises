#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;
int a[N];
double ans;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 5 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5*n);
    for (int i = n; i < 4 * n; i++)
    {
        ans += a[i];
    }
    printf("%lf",ans / (3 * n));
    return 0;
}
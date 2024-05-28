#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int a[N], v[N];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    multiset<int> s;
    set<int> ss;
    for (int i = 1, j = 1; i <= n; i++)
    {
        s.insert(a[i]);
        ss.insert(a[i]);
        if (i - j + 1 > k)
        {
            s.erase(s.find(a[j]));
            if (s.count(a[j]) == 0)
                ss.erase(a[j]);
            j++;
        }
        if(ss.size()==k)ans ++;
    }
    cout << ans << endl;
    return 0;
}
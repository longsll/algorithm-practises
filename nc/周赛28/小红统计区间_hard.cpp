#include <bits/stdc++.h>

using namespace std;

using LL = long long;

using i128 = __int128_t;

const int mod = 1e9 + 7, N = 1e6 + 100, M = 10010;

int a[N], len;
LL s[N], tr[N];
vector<LL> alls;

int lowbit(int x)
{
    return x & -x;
}

void add(int u)
{
    for(int i = u; i <= len; i += lowbit(i))  tr[i] ++;
}

LL sum(int u)
{
    LL res = 0;
    for(int i = u; i >= 1; i -= lowbit(i))  res += tr[i];
    return res;
}

int find(LL x)
{
    int l = 0, r = alls.size() - 1;
    while(l < r)
    {
        int mid = l + r >> 1;
        if(alls[mid] >= x)      r = mid;
        else    l = mid + 1;
    }
    return r + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    LL k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for(int i = 1;i <= n; i ++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    
    //离散化
    for(int i = 1;i <= n; i ++)alls.push_back(s[i]), alls.push_back(s[i] - k);
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    len = alls.size() - 1;

    LL ans = 0;
    for(int i = 1;i <= n; i ++)
    {
        //找小于等于s[i] - k的前缀和个数
        ans += sum(find(s[i] - k));
        add(find(s[i]));
        if(s[i] >= k)   ans ++;
    }
    cout << ans << '\n';

    return 0;
}
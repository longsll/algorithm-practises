#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2e4 + 10;
// char a[N][N];
void solve()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        // scanf("%s", a[i]);
        cin >> a[i];
    }
    int ans = 1e9;
    if(w >= k)
    for (int i = 0; i < h; i++)
    {
        int co = 0, c = 0, cx = 0;
        for (int l = 0, r = 0;;l++)
        {
            
            if (l == 0)
            {
                while (r < k)
                {
                    if (a[i][r] == 'x')
                        cx++;
                    else if (a[i][r] == 'o')
                        co++;
                    else
                        c++;
                    r++;
                }
                r --;
                if (cx == 0)
                    ans = min(ans, c); 
                    continue;
            } 
            if (a[i][l-1] == 'x')
                cx--;
            else if (a[i][l-1] == 'o')
                co--;
            else
                c--;
            r++;
            if (r >= w)
                break;                
            if (a[i][r] == 'x')
                cx++;
            else if (a[i][r] == 'o')
                co++;
            else
                c++;
            if (cx == 0)
                ans = min(ans, c);
        }
    }
    if(h >= k)
    for (int i = 0; i < w; i++)
    {
        int co = 0, c = 0, cx = 0;
        for (int l = 0, r = 0;;l++)
        {
            if (l == 0)
            {
                while (r < k)
                {
                    if (a[r][i] == 'x')
                        cx++;
                    else if (a[r][i] == 'o')
                        co++;
                    else
                        c++;
                    r++;
                }
                r --;
                if (cx == 0)
                    ans = min(ans, c); 
                    continue;
            } 
            if (a[l-1][i] == 'x')
                cx--;
            else if (a[l-1][i] == 'o')
                co--;
            else
                c--;
            r++;
            if (r >= h)
                break;                
            if (a[r][i] == 'x')
                cx++;
            else if (a[r][i] == 'o')
                co++;
            else
                c++;
            if (cx == 0)
                ans = min(ans, c);
        }
    }
    if(ans == 1e9)ans = -1;
    cout << ans;
}

int main()
{
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
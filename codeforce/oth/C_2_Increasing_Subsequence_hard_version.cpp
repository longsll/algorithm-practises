#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N], b[N] , c;
string ans;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = 1, r = n;
    while (l < r)
    {
        if ((a[l] < a[r]) && (a[l] > c) && (a[r] > c))
        {
            ans += 'L';
            c = a[l];
            l++;
        }
        else if ((a[r] < a[l]) && (a[r] > c) && (a[l] > c))
        {
            ans += 'R';
            c = a[r];
            r--;
        }else if(a[l] <= c && a[r] > c){
            int c2 = 0;
            for (int i = r; i > l; i--)
            {
                if (a[i] > a[i + 1])
                    c2++;
                else
                    break;
            }
            for (int i = 0; i < c2; i++)
                    ans += 'R';
            break;

        }else if(a[r] <= c && a[l] > c){
            int c1 = 0;
            for (int i = l; i < r; i++)
            {
                if (a[i] > a[i - 1])
                    c1++;
                else
                    break;
            }
            for (int i = 0; i < c1; i++)
                    ans += 'L';
            break;
        }
        else if (a[l] == a[r])
        {
            if(a[l] <= c)break;
            int c1 = 0, c2 = 0;
            for (int i = l; i < r; i++)
            {
                if (a[i] > a[i - 1])
                    c1++;
                else
                    break;
            }
            for (int i = r; i > l; i--)
            {
                if (a[i] > a[i + 1])
                    c2++;
                else
                    break;
            }
            if (c1 > c2)
            {
                for (int i = 0; i < c1; i++)
                    ans += 'L';
            }
            else
            {
                for (int i = 0; i < c2; i++)
                    ans += 'R';
            }
            break;
        }else break;
    }
    if (l == r)
    {
        ans += 'R';
    }
    cout << ans.size() << endl;
    cout << ans << endl;
    return 0;
}
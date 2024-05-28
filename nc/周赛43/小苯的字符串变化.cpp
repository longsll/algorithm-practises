#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int a[N];
int main()
{
    string s;
    cin >> s;
    s = " " + s;
    int n = s.size();
    for(int i = 1 ; i < n ; i ++){
        a[i] = a[i - 1];
        if(s[i] >= 'A' && s[i] <= 'Z')a[i] ++;
    }
    int ans = 1e9;
    for(int i = 1 ; i < n  - 1; i ++){
        int l = i - a[i];
        int r = a[n - 1] - a[i];
        ans = min(ans , l + r);
    }
    cout << ans;
    return 0;
}
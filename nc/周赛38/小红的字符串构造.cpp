#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    string ans;
    for(int i = 0 ; i < k ; i ++){
        char t = 'a' + (i % 26);
        ans += t;
        ans += t;
    }
    for(int i = k * 2 ; i < n ; i ++){
        ans += 'a' + (i % 26);
    }
    cout << ans;
    return 0;
}
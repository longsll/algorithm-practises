#include <bits/stdc++.h>

using namespace std;
int n , m , x;
const int N = 1e5 + 10;
int a[N];
int main()
{
    cin >> n;
    string s;
    cin >> s;
    cout << max(s[0] , s[n - 1]);
    return 0;
}
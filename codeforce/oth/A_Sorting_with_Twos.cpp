#include <bits/stdc++.h>

using namespace std;
const int N = 2000;
int a[N];

void solve()
{
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        //i不为2的幂时出现递减
        if ((i & (i - 1)) != 0 && a[i] < a[i - 1]) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n"; 
}

int main()
{
    int T;
    cin >> T;
    while (T --)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    
    std::array<std::vector<std::string>, 6> f;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        
        f[s.size()].push_back(s);
    }
    i64 ans = 0;
    for (int x = 1; x <= 5; x++) {
        for (int y = 1; y <= 5; y++) {
            if ((x + y) % 2 == 0) {
                std::array<int, 100> cnt{};
                int h = (x + y) / 2;
                for (auto a : f[x]) {
                    int s = 50;
                    for (int i = 0; i < x; i++) {
                        if (i < h) {
                            s += a[i] - '0';
                        } else {
                            s -= a[i] - '0';
                        }
                    }
                    cnt[s] += 1;
                }
                for (auto a : f[y]) {
                    int s = 50;
                    for (int i = 0; i < y; i++) {
                        if (x + i >= h) {
                            s += a[i] - '0';
                        } else {
                            s -= a[i] - '0';
                        }
                    }
                    ans += cnt[s];
                }
            }
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}
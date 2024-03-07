#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e6;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
		int n;
		cin >> n;
		int m = -1;
		for (int i = 1; i <= n + 1; i++) {
			if (n % i != 0) {
				m = i;
				break;
			}
		}
		string ans;
		for (int i = 0, j = 0; i < n; i++, (j += 1) %= m) {
			ans.append(1, 'a' + j); 
		}
		cout << ans << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5;
int a[N];

void solve()
{
	long long n, sum = 0;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
    //对前一半的用A的到的连击数
	sum /= 2; 
	sort(a.begin() + 1, a.end());
	long long ans = 0;
	for (int i = n; i >= 1; i--)
	{   
        //大招
		if (sum >= a[i])
			sum -= a[i], a[i] = 0, ans++;
		else if (sum)
			a[i] -= sum, sum = 0, ans++;
	}
    //A
	for (int i = 1; i <= n; i++)
		ans += a[i];
	cout << ans << endl;
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
#include <iostream>
#include <cstring>
using namespace std;

int n , k;
int MOD = 1000000007;
long long  dp[2005][2005];

int main()
{
	cin >> n >> k;
	for (int i = 0 ; i <= n ; i ++)dp[1][i] = 1;
	for (int i = 2 ; i <= k ; i ++){
		for (int j = 1 ; j <= n ; j ++){
			for (int l = 1 ;l * j <= n ; l ++){
				dp[i][j] = (dp[i][j] + dp[i - 1][l * j]) % MOD;
			}
		}
	}
	long long res = 0;
	for (int i = 1 ; i <= n ; i ++){
		res = (res  + dp[k][i]) % MOD;
	}
	cout << res;
}
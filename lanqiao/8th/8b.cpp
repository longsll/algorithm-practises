#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int v = 10000, n;
int gcd(int a, int b)  // 欧几里得算法
{
    return b ? gcd(b, a % b) : a;
}

int main() 
{
	
	cin >> n;
	bool f = false;
	int vx[101],w[101];
	for (int i = 1; i <= n; i++) {
		cin >> vx[i];
		w[i] = vx[i];
	}
	for(int i = 1 ; i <= n ; i ++){
	    for(int j = i ; j <= n ; j ++){
	        if(i == j)continue;
	        if(gcd(vx[i] , vx[j]) == 1)f = true;
	    }
	}
	int dp[106][10006];
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j <=v ; j++) {
		    dp[i][j]=dp[i-1][j];
		    if(j>=vx[i])
            dp[i][j]=max(dp[i][j],dp[i][j-vx[i]]+w[i]);
		}
	}
    int res = 0;
	for(int i = 1 ; i <= v ; i ++){
	    if(dp[n][i] != i)res ++;
	}
	if(f)cout << res;
	else cout << "INF";
	return 0;
}
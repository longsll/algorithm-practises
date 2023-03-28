#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 20; 

LL n, x, y;

LL m = 1;

LL red[N], blue[N];

int main(){
	
	cin >> n >> x >> y;
	
	red[1] = 0, blue[1] = 1;
	
	for(int i = 2; i <= n; i ++){
		blue[i] = red[i - 1] + blue[i - 1] * y;
		red[i] = red[i - 1] + blue[i] * x;
	}
	
	cout << red[n] << endl;
	
	return 0;
	
}

#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];

int main()
{
    int T;
    cin >> T;
    while(T --){
        int n , m , d;
        cin >> n >> m >> d;
        for(int i = 1 ; i <= m ; i ++)cin >> a[i];
        int sum = 1, cnt = 0;
		a[0] = 1; a[m + 1] = n;
		for (int i = 1; i <= m; i ++ )
		{
			if(i < m)
			{
				int x = (a[i + 1] - a[i - 1] + d - 1) / d;//移除a[i]
				int y = (a[i + 1] - a[i] + d - 1) / d + (a[i] - a[i - 1] + d - 1) / d;//没移除a[i]
				if(x < y) cnt ++;
			}
			sum += (a[i] - a[i - 1] + d - 1) / d;
		}
		sum += (n -a[m]) / d;
		int x = (n - a[m - 1]) / d;
		int y = (a[m] - a[m - 1] + d - 1) / d + (n - a[m]) / d;
		if(x < y) cnt ++;
		if(!cnt) printf("%d %d\n", sum, m);
		else printf("%d %d\n", sum - 1, cnt);
    }
    return 0;
}
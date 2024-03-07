#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N] , b[N];

void solve()
{
		int ans=0 , n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		for(int i=1;i<=n;i++)
		ans+=abs(a[i]-b[i]);
		int maxn=0,minn=1e18;
        //找到最小的右端点和最大的左端点
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,min(a[i],b[i]));
			minn=min(minn,max(a[i],b[i]));
		}
		cout<<max(ans,ans+2*(maxn-minn))<<'\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
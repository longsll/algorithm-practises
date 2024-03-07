#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const int N=2e6+1;
const int mo=998244353;
int a[N];
int x,y,n,sum,m,k,z,p,b[N],c[N];
void sovel()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	while(m--)
	{
		cin>>y;
		int manx=0;
		for(int i=62;i>=0;i--)
		{
			int x=(1LL<<i),sum=0;
			for(int j=1;j<=n;j++)
			{
				if(((a[j]>>i)&1)==0)
				{
					sum+=x-(a[j]%x);
					if(sum>y)
					{
						break;
					}
				}
			}
			if(y>=sum)
			{
				manx|=x;
				y-=sum;
				for(int j=1;j<=n;j++)
				{
					if(((a[j]>>i)&1)==0)
					{
						a[j]+=x-(a[j]%x);
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			a[i]=b[i];
		}
		cout<<manx<<endl;
	}
}
signed main()
{
	int t=1;
	while(t--)
	{
		sovel();
	}
	return 0;
 } 
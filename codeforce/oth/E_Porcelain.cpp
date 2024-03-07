#include<bits/stdc++.h>
using namespace std;
int dp[10001],dp1[101][101],n,m,v[101],sum[101][101],q[101];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int k;
		cin>>k;
		for(int j=1;j<=k;j++)
			cin>>v[j],sum[i][j]=sum[i][j-1]+v[j];
		for(int j=1;j<=k;j++)
			for(int l=0;l<=j;l++)
			{
				int r=k-(j-l);
				dp1[i][j]=max(dp1[i][j],sum[i][l]+sum[i][k]-(r==0?0:sum[i][r]));//边界处理
			}
		q[i]=k;
	}
	for(int i=1;i<=n;i++)
		for(int k=m;k>=0;k--)
			for(int j=0;j<=q[i];j++)
				if(k>=j)
					dp[k]=max(dp[k], dp[k-j]+dp1[i][j] );
	cout<<dp[m];
}
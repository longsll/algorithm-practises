#include<bits/stdc++.h>
using namespace std;
int t,n,a[5005],f[5005][5005],b[5005];
int main() {
	cin>>n;
	memset(f,0x3f3f3f,sizeof(f));
	int cnt=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]==1)b[++cnt]=i;
	}
	for(int i=0;i<=n;i++)f[0][i]=0;
	for(int i=1;i<=cnt;i++) {
		for(int j=1;j<=n;j++) {
			if(a[j]==0)  
				f[i][j]=min(f[i][j-1],f[i-1][j-1]+abs(b[i]-j));
			else 
				f[i][j]=f[i][j-1];
		}
	}
	cout<<f[cnt][n]<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		int ans=INT_MAX,now=0,now1=0;
        //在0分界
		for(int i=1;i<n;i++)if(a[i]>=a[i+1])now++;
		ans=min(ans,now);
		for(int i=1;i<n;i++){
            //枚举在i分界
			if(a[i]>=a[i-1])now1++;
			if(a[i]>=a[i+1])now--;
			ans=min(ans,now+now1);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
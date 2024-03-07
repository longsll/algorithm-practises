#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
int a[N];

void solve()
{
    int n , mx = -2e9 , mi = 2e9;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        mx = max(mx , a[i]);
        mi = min(mi , a[i]);
    }
    vector<int>ans;
    while(mx != mi){
        int x;
        if (mx % 2 == 0 && mi % 2 == 0) x = 1;
		else if (mx % 2 == 1 && mi % 2 == 1) x = 1;
		else if (mx % 2 == 0 && mi % 2 == 1) x = 1;
		else x = 2;
		mx = (mx + x) / 2;
		mi = (mi + x) / 2;
		ans.push_back(x);
    }
    int len = ans.size();
    cout << len << endl;
    if(len <= n){
        for(auto o : ans)cout << o << " ";
        cout << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

void solve(){
    int n , m ,ans = 0;
    cin >> n >> m;
    m++;
    for(int i = 30 ; i >= 0 ; i --){
        int x = (n >> i) & 1;
        int y = (m >> i) & 1;
        if((n>>i &1)==1&&(m>>i &1)==0)	break;
		if((n>>i &1)==0&&(m>>i &1)==1)	ans|=1<<i;
    }
    cout << ans << endl;
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
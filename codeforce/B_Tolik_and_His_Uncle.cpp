#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

int n,m;

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n/2 ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            printf("%d %d\n",i,j);
            printf("%d %d\n",n - i + 1,m - j + 1);
        }
    }   
    if(n & 1){
        int i = n / 2 + 1;
        for(int j = 1 ; j <= m / 2; j ++){
            printf("%d %d\n",i,j);
            printf("%d %d\n",i,m-j+1);
        }
        if(m & 1)cout << i <<" "<< m/2 + 1<< endl;
    }
    return 0;
}
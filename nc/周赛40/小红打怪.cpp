#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 10;
string g[N];
int main()
{
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++){
        cin >> g[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(g[i][j] != '.' && g[i][j] != '*'){
                if(g[i][j] == 'W'){
                    for(int k = 0 ; k < i ; k ++){
                        ans += (g[k][j] == '*');
                    }
                }else if(g[i][j] == 'A'){
                    for(int k = 0 ; k < j ; k ++){
                        ans += (g[i][k] == '*');
                    }
                }else if(g[i][j] == 'S'){
                    for(int k = i ; k < n ; k ++){
                        ans += (g[k][j] == '*');
                    }
                }else if(g[i][j] == 'D'){
                    for(int k = j ; k < m ; k ++){
                        ans += (g[i][k] == '*');
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
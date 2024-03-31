#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 10;
char s[N][N];
int vis[N][N];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int n , m;
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++){
        scanf("%s" , &s[i]);
    }    
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0] = 1;
    while(!q.empty()){
        auto t = q.front();
        int x = t.first , y = t.second;
        q.pop();
        for(int i = 0 ; i < 4 ; i ++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
            if(s[xx][yy] == s[x][y])continue;
            if(vis[xx][yy]) continue;
            vis[xx][yy] = vis[x][y] + 1;
            q.push({xx,yy});
        }
    } 
    if(vis[n-1][m-1] == 0)cout << "-1\n";
    else cout << vis[n-1][m-1] - 1 << endl;  
    return 0;
}
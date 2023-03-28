#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 40005;
int n , m;
int p[N];

int find(int x){
    if(p[x] != x)p[x] = find(p[x]);
    return p[x];
}

void init( ){
    for(int i = 1 ; i <= N ; i ++)p[i] = i;
}

int get(int x , int y){
    return x * n + y;
}

int main()
{
    init();
    cin >> n >> m;
    int res = 0;
    for(int i = 1 ; i <= m ; i ++){
        int x , y ;
        char d;
        cin >> x >> y >> d;
        x-- , y --;
         int a = get(x ,y);
         int b;
         if(d == 'D')b = get(x + 1 , y);
         else b = get(x , y + 1);
        if(find(a) == find(b)){
            res = i;
            break;
        }
         p[find(a)] = find(b);
    }
    if (!res) puts("draw");
    else cout << res << endl;
    return 0;
}
#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;
map<pair<int,int>,int>m;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int x = 0 , y = 0;
    m[{x,y}] = 1;
    bool f = false;
    for(int i = 0 ; i < n ; i ++){
        if(s[i] == 'R'){
            x ++;
        }else if(s[i] == 'L'){
            x --;
        }else if(s[i] == 'U'){
            y ++;
        }else{
            y --;
        }
        if(m[{x,y}] > 0){
            f = true;
            break;
        }else{
            m[{x,y}] = 1;
        }
    }
    if(f){
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}
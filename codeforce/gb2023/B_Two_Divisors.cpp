#include <bits/stdc++.h>

using namespace std;


long long gcd(long a, long b){
    if(b == 0)return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a * b) / gcd(a, b);
}

void solve()
{
    long long a , b;
    cin >> a >> b;
    if(b < a)swap(a, b);
    if(a == 1){
        cout << b * b << endl;
        return ;
    }
    if(gcd(a , b) == 1){
        cout << a * b << endl;
        return ;
    }
    if(lcm(a, b) != b){
        cout << lcm(a, b) << endl;
        return ;
    }
    cout << b * (b / a) << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
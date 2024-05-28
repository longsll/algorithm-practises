#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    if(b >= a || b >= c){
        cout << 0;
        return 0;
    }
    cout << min(a , c) - b;
    return 0;
}
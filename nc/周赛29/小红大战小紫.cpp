#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    if(a == b)cout << "draw";
    else if(a > b)cout << "kou\n";
    else cout << "yukari\n";
    return 0;
}
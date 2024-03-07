#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n --)
    {
        int a , b;
        cin >> a >> b;
        if(a > 1){
            cout << 1 << endl;
            continue;
        }
        if(b != 2){
            cout << 2 << endl;
            continue;
        }else{
            cout << 3 << endl;
            continue;
        }
    }
    return 0;
}
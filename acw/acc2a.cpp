#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }
    int res = 0;
    while(n > 0){
        if(n % 2 == 0)n = n / 2;
        else {
            n --;
            res ++;
        }
    }
    cout << res;
    return 0;
}
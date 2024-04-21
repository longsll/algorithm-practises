#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i <= 10 ; i ++ , n ++){
        if(n % 10 == 0){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
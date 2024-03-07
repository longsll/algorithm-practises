#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= 3*n ; i ++){
        for(int i = 1 ; i <= n ; i ++)cout << "*";
        for(int i = 1 ; i <= 2*n ; i ++)cout << ".";
        for(int i = 1 ; i <= n ; i ++)cout << "*";
        cout << endl;
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= i ; j ++)cout << ".";
        for(int i = 1 ; i <= n ; i ++)cout << "*";
        for(int j = (2 * (n - i)); j; j --)cout << ".";
        for(int i = 1 ; i <= n ; i ++)cout << "*";
        for(int j = 1 ; j <= i ; j ++)cout << ".";
        cout << endl;
    }
}
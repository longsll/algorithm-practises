#include <bits/stdc++.h>

using namespace std;

int main()
{
    double first = 0 , sum = 0;
    cin >> first;
    sum += first;
    for(int i = 0 ; i < 5 ; i ++){
        int x;
        cin >> x;
        sum += x;
    }
    if(first < sum / 30)cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
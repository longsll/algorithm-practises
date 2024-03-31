#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int main()
{

    string a;
    cin >> a;
    int ans = 0 , n = a.size();
    for(int i = 0 ; i < n ; i ++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            if(i - 1 >= 0){
                if(a[i - 1] != '0'){
                    ans ++;
                    a[i] = '0';
                }
            }
        }
    }
    cout << ans;
    return 0;
}